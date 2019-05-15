#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class PersonalInfo;
}

class PersonalInfo : public QWidget
{
    Q_OBJECT

public:


public:
    explicit PersonalInfo(QWidget *parent = nullptr);
    ~PersonalInfo();



private slots:


signals:


private:
    Ui::PersonalInfo *ui;
};
#endif // PERSONALINFO_H
