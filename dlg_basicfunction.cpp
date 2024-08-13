#include "dlg_basicfunction.h"
#include "ui_dlg_basicfunction.h"
using namespace std;
vector <int> arr;

Dlg_BasicFunction::Dlg_BasicFunction(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_BasicFunction)
{
    ui->setupUi(this);
}

Dlg_BasicFunction::~Dlg_BasicFunction()
{
    delete ui;
}
string Dlg_BasicFunction::cutLeftString(const string& str)
{
    string s = "";
    int pos = -1;
    auto it = find_if(str.begin(), str.end(), [](char ch) {return ch != ' '; });
    //it points to the first character which is not space;
    if (it != str.end())
    {
       s= string(it, str.end());
       pos = distance(str.begin(),it);
    }
    return s;
    
}
string Dlg_BasicFunction::cutRightString(const string& str)
{
    string s = "";
    int pos = -1;
    auto it = find_if(str.rbegin(), str.rend(), [](char ch) {return ch != ' '; });
    if (it != str.rend())
    {
        pos=distance(it,str.rend());
    }
    if (pos != -1)
    {
        s=str.substr(0, pos);
    }
    //return string(it, str.crend());
    return s;
}
vector<int> split_func(string str)
{
    vector<int>token;
    int start = 0;
    int end = 0;
    while (end=str.find(' ', start) != string::npos)
    {
        token.push_back(stoi(str.substr(start, end - start)));
    }
    token.push_back(stoi(str.substr(start)));
    return token;
}
void Dlg_BasicFunction::on_btn_sum_clicked()
{
   string str = ui->txt_array->text().toStdString();
   string s=cutLeftString(str);
   s = cutRightString(s);
   arr = split_func(s);
   string val = accumulate(arr.begin(), arr.end(), string(), [](string acc, int x) { return acc + to_string(x);  });
   ui->lbl_results->setText(QString::fromStdString(val));
   //string() -> initial value of string();
   
}

