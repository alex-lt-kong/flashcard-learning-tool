/********************************************************************************
** Form generated from reading UI file 'msgbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGBOX_H
#define UI_MSGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_msgBox
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Yes;
    QPushButton *pushButton_No;

    void setupUi(QDialog *msgBox)
    {
        if (msgBox->objectName().isEmpty())
            msgBox->setObjectName(QStringLiteral("msgBox"));
        msgBox->resize(289, 98);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Main.ico"), QSize(), QIcon::Normal, QIcon::Off);
        msgBox->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(msgBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(msgBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Yes = new QPushButton(msgBox);
        pushButton_Yes->setObjectName(QStringLiteral("pushButton_Yes"));
        pushButton_Yes->setEnabled(false);

        horizontalLayout->addWidget(pushButton_Yes);

        pushButton_No = new QPushButton(msgBox);
        pushButton_No->setObjectName(QStringLiteral("pushButton_No"));
        pushButton_No->setEnabled(false);

        horizontalLayout->addWidget(pushButton_No);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(msgBox);

        QMetaObject::connectSlotsByName(msgBox);
    } // setupUi

    void retranslateUi(QDialog *msgBox)
    {
        msgBox->setWindowTitle(QApplication::translate("msgBox", "QJLT - Break Reminder", Q_NULLPTR));
        label->setText(QApplication::translate("msgBox", "Ready to take a break?", Q_NULLPTR));
        pushButton_Yes->setText(QApplication::translate("msgBox", "Yes [2]", Q_NULLPTR));
        pushButton_No->setText(QApplication::translate("msgBox", "No", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class msgBox: public Ui_msgBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGBOX_H
