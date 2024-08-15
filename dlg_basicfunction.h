#ifndef DLG_BASICFUNCTION_H
#define DLG_BASICFUNCTION_H

#include <QDialog>

namespace Ui {
class Dlg_BasicFunction;
}

class Dlg_BasicFunction : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_BasicFunction(QWidget *parent = nullptr);
    ~Dlg_BasicFunction();

private slots:
    void on_btn_sum_clicked();
    void on_btn_sum_2_clicked();
    void on_btn_minus_clicked();
    void on_btn_minus_2_clicked();
    void on_btn_multiply_clicked();
    void on_btn_multiply_2_clicked();
    void on_btn_divide_clicked();
    void on_btn_divide_2_clicked();

    void on_btn_sum_3_clicked();
    void on_btn_sum_4_clicked();
    void on_btn_minus_3_clicked();
    void on_btn_minus_4_clicked();
    void on_btn_multiply_3_clicked();
    void on_btn_multiply_4_clicked();
    void on_btn_divide_3_clicked();
    void on_btn_divide_4_clicked();



private:
    Ui::Dlg_BasicFunction *ui;
    std::string cutLeftString(const std::string& );
    std::string cutRightString(const std::string&);
    void updateArray();
    void updateArray2();
    void updateResults();
    void updateResults_Double();
    void updateResults_Array();
    void updateResults_Array_Double();
};

#endif // DLG_BASICFUNCTION_H
