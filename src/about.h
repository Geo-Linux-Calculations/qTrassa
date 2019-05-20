#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);

    ~About();

private slots:
    void on_buttonBox_accepted();

    void on_label_7_linkActivated(const QString &link);

private:
    Ui::About *ui;
};

#endif // ABOUT_H