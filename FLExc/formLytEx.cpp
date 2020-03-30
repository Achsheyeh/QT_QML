#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>

#include "formLytEx.h"

FormLytEx::FormLytEx(QWidget *parent)
    : QWidget(parent)
{
    QLineEdit *nameEdt = new QLineEdit(this);
    QLineEdit *addrEdt = new QLineEdit(this);
    QLineEdit *occpEdt = new QLineEdit(this);

    QFormLayout *frmLyt = new QFormLayout;
    frmLyt->setLabelAlignment(Qt::AlignRight| Qt::AlignVCenter);
    frmLyt->addRow("Name:", nameEdt);
    frmLyt->addRow("Address:", addrEdt);
    frmLyt->addRow("Occupation:", occpEdt);
    setLayout(frmLyt);
}

FormLytEx::~FormLytEx()
{
}

