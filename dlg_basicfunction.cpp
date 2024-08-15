#include "dlg_basicfunction.h"
#include "ui_dlg_basicfunction.h"
using namespace std;
vector <int> arr;
vector<int> arr2;
int rs = 0;
double rs_double;
vector<int> rs_array;
vector<double> rs_array_double;
Dlg_BasicFunction::Dlg_BasicFunction(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_BasicFunction)
{
    ui->setupUi(this);
    ui->txt_array->setText(" 1 2 3 4 5  ");
    ui->txt_array_2->setText(" 2 1 0 -1 -2  ");
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
    size_t start = 0;
    size_t end = 0;
    while ((end=str.find(' ', start)) != string::npos)
    {
        if (end > start) token.push_back(stoi(str.substr(start, end - start)));
        start = end + 1;
    }
    if (start<str.length()) token.push_back(stoi(str.substr(start)));
    return token;

   
    
}
void Dlg_BasicFunction::updateArray()
{
    string str = ui->txt_array->text().toStdString();
    string s = cutLeftString(str);
    s = cutRightString(s);
    arr = split_func(s);
}
void Dlg_BasicFunction::updateArray2()
{
    string str = ui->txt_array_2->text().toStdString();
    string s = cutLeftString(str);
    s = cutRightString(s);
    arr2 = split_func(s);
}
void Dlg_BasicFunction::updateResults() {
    ui->lbl_results->setText("Results is "+QString::number(rs));
}
void Dlg_BasicFunction::updateResults_Double() {
    ui->lbl_results->setText("Results is " + QString::number(rs_double,'f',2));
}

void Dlg_BasicFunction::updateResults_Array() {
    string st = accumulate(rs_array.begin(), rs_array.end(), string(), [](string acc, int x) {return acc + to_string(x); });
    ui->lbl_results_2->setText("Results is " +QString::fromStdString( st));
}

void Dlg_BasicFunction::updateResults_Array_Double() {
    
    QString st = accumulate(rs_array.begin(), rs_array.end(), QString(), [](QString acc, double x) {return acc + QString::number(x,'f',1)+" "; });
    ui->lbl_results_2->setText("Results is " + st);
    ui->lbl_results_2->setWordWrap(true);


}
void Dlg_BasicFunction::on_btn_sum_clicked()
{
    updateArray();
    rs = 0;
    for (int i : arr)
    {
        rs += i;
    }
    updateResults();
}

void Dlg_BasicFunction::on_btn_sum_2_clicked() {
    updateArray();
    rs = accumulate(arr.begin(), arr.end(), 0);
    updateResults();
}
void Dlg_BasicFunction::on_btn_minus_clicked() {
    updateArray();
    rs = 0;
    for (int i : arr)
    {
        rs -= i;
    }
    updateResults();
}
void Dlg_BasicFunction::on_btn_minus_2_clicked() {
    updateArray();
    rs = accumulate(arr.begin(), arr.end(), 0,std::minus());
    updateResults();

}
void Dlg_BasicFunction::on_btn_multiply_clicked() {
    updateArray();
    rs = 1;
    for (int i : arr)
    {
        rs *= i;
    }
    updateResults();
}
void Dlg_BasicFunction::on_btn_multiply_2_clicked() {
    updateArray();
    rs = accumulate(arr.begin(), arr.end(), 1,multiplies());
    updateResults();
}
void Dlg_BasicFunction::on_btn_divide_clicked() {
    updateArray();
    rs_double = 1;
    for (int i : arr)
    {
        rs_double /=i;
    }
    updateResults_Double();
}
void Dlg_BasicFunction::on_btn_divide_2_clicked() {
    updateArray();
    rs_double = accumulate(arr.begin(), arr.end(), 1.0,divides());
    updateResults_Double();
}

void Dlg_BasicFunction::on_btn_sum_3_clicked()
{
    updateArray();
    updateArray2();
    int t = 0;
    rs_array.resize(max(arr.size(),arr2.size()),0);
    for (int i;i<rs_array.size();i++)
    {
        if (i < arr.size())
           t= arr[i];
        if (i<arr2.size()) 
           t +=arr2[i];
        rs_array[i] = t;
    }
    updateResults_Array();
}

void Dlg_BasicFunction::on_btn_sum_4_clicked() {
    updateArray();
    updateArray2();
    transform(arr.begin(), arr.end(), arr2.begin(), rs_array.begin(), plus());
    updateResults_Array();
}
void Dlg_BasicFunction::on_btn_minus_3_clicked() {
    updateArray();
    updateArray2();
    int t = 0;
    rs_array.resize(max(arr.size(), arr2.size()), 0);
    for (int i; i < rs_array.size(); i++)
    {
        if (i < arr.size())
            t = arr[i];
        if (i < arr2.size())
            t -= arr2[i];
        rs_array[i] = t;
    }
    updateResults_Array();
}
void Dlg_BasicFunction::on_btn_minus_4_clicked() {
    updateArray();
    updateArray2();
    transform(arr.begin(), arr.end(), arr2.begin(), rs_array.begin(), minus());
    updateResults_Array();

}
void Dlg_BasicFunction::on_btn_multiply_3_clicked() {
    updateArray();
    updateArray2();
    int t = 1;
    rs_array.resize(max(arr.size(), arr2.size()), 0);
    for (int i; i < rs_array.size(); i++)
    {
        if (i < arr.size())
            t = arr[i];
        if (i < arr2.size())
            t *= arr2[i];
        rs_array[i] = t;
    }
    updateResults_Array();
}
void Dlg_BasicFunction::on_btn_multiply_4_clicked() {
    updateArray();
    updateArray2();
    transform(arr.begin(), arr.end(), arr2.begin(), rs_array.begin(), multiplies());
    updateResults_Array();
}
void Dlg_BasicFunction::on_btn_divide_3_clicked() {
    updateArray();
    updateArray2();
    double t =1;
    rs_array.resize(max(arr.size(), arr2.size()), 0);
    for (int i; i < rs_array.size(); i++)
    {
        if (i < arr.size())
            t = arr[i];
        if (i < arr2.size()) {
            if (arr2[i] != 0) t /= arr2[i];
            else t = 0;
        }
        rs_array[i] = t;
    }
    updateResults_Array_Double();
}
void Dlg_BasicFunction::on_btn_divide_4_clicked() {
    updateArray();
    updateArray2();
    transform(arr.begin(), arr.end(), arr2.begin(), rs_array.begin(), [](int x, int y) 
        {if (y != 0) return (double)x / y; else return 0.0; });
    updateResults_Array_Double();
}