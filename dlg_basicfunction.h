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

private:
    Ui::Dlg_BasicFunction *ui;
    std::string cutLeftString(const std::string& );
    std::string cutRightString(const std::string&);
};

#endif // DLG_BASICFUNCTION_H
