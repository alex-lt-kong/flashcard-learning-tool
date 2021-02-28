/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_DBContent;
    QHBoxLayout *horizontalLayout_6;
    QTableView *tableView_KU;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *plainTextEdit_Statistics;
    QGroupBox *groupBox_Settings;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_ClientName;
    QLabel *label_Fontsize;
    QLabel *label_NKI;
    QLabel *label_IntervalNum;
    QLabel *label_WindowStyle;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_ClientName;
    QLineEdit *lineEdit_FontSize;
    QLineEdit *lineEdit_NKI;
    QLineEdit *lineEdit_IntervalNum;
    QLineEdit *lineEdit_WindowStyle;
    QGroupBox *groupBox_AvailableMaintypes;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_NumberstoLearn;
    QGroupBox *groupBox_Controls;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Quit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1137, 682);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Main.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/Main.ico"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_DBContent = new QGroupBox(centralWidget);
        groupBox_DBContent->setObjectName(QStringLiteral("groupBox_DBContent"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(groupBox_DBContent->sizePolicy().hasHeightForWidth());
        groupBox_DBContent->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(groupBox_DBContent);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tableView_KU = new QTableView(groupBox_DBContent);
        tableView_KU->setObjectName(QStringLiteral("tableView_KU"));
        sizePolicy.setHeightForWidth(tableView_KU->sizePolicy().hasHeightForWidth());
        tableView_KU->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(tableView_KU);


        horizontalLayout->addWidget(groupBox_DBContent);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        plainTextEdit_Statistics = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Statistics->setObjectName(QStringLiteral("plainTextEdit_Statistics"));
        sizePolicy.setHeightForWidth(plainTextEdit_Statistics->sizePolicy().hasHeightForWidth());
        plainTextEdit_Statistics->setSizePolicy(sizePolicy);
        plainTextEdit_Statistics->setMinimumSize(QSize(0, 0));
        plainTextEdit_Statistics->setMaximumSize(QSize(16777215, 16777215));
        plainTextEdit_Statistics->setReadOnly(true);

        horizontalLayout_3->addWidget(plainTextEdit_Statistics);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_Settings = new QGroupBox(centralWidget);
        groupBox_Settings->setObjectName(QStringLiteral("groupBox_Settings"));
        sizePolicy.setHeightForWidth(groupBox_Settings->sizePolicy().hasHeightForWidth());
        groupBox_Settings->setSizePolicy(sizePolicy);
        groupBox_Settings->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_4 = new QHBoxLayout(groupBox_Settings);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_ClientName = new QLabel(groupBox_Settings);
        label_ClientName->setObjectName(QStringLiteral("label_ClientName"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_ClientName->sizePolicy().hasHeightForWidth());
        label_ClientName->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(label_ClientName);

        label_Fontsize = new QLabel(groupBox_Settings);
        label_Fontsize->setObjectName(QStringLiteral("label_Fontsize"));
        sizePolicy2.setHeightForWidth(label_Fontsize->sizePolicy().hasHeightForWidth());
        label_Fontsize->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(label_Fontsize);

        label_NKI = new QLabel(groupBox_Settings);
        label_NKI->setObjectName(QStringLiteral("label_NKI"));
        sizePolicy2.setHeightForWidth(label_NKI->sizePolicy().hasHeightForWidth());
        label_NKI->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(label_NKI);

        label_IntervalNum = new QLabel(groupBox_Settings);
        label_IntervalNum->setObjectName(QStringLiteral("label_IntervalNum"));
        sizePolicy2.setHeightForWidth(label_IntervalNum->sizePolicy().hasHeightForWidth());
        label_IntervalNum->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(label_IntervalNum);

        label_WindowStyle = new QLabel(groupBox_Settings);
        label_WindowStyle->setObjectName(QStringLiteral("label_WindowStyle"));
        sizePolicy2.setHeightForWidth(label_WindowStyle->sizePolicy().hasHeightForWidth());
        label_WindowStyle->setSizePolicy(sizePolicy2);

        verticalLayout_5->addWidget(label_WindowStyle);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lineEdit_ClientName = new QLineEdit(groupBox_Settings);
        lineEdit_ClientName->setObjectName(QStringLiteral("lineEdit_ClientName"));

        verticalLayout_6->addWidget(lineEdit_ClientName);

        lineEdit_FontSize = new QLineEdit(groupBox_Settings);
        lineEdit_FontSize->setObjectName(QStringLiteral("lineEdit_FontSize"));
        sizePolicy.setHeightForWidth(lineEdit_FontSize->sizePolicy().hasHeightForWidth());
        lineEdit_FontSize->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(lineEdit_FontSize);

        lineEdit_NKI = new QLineEdit(groupBox_Settings);
        lineEdit_NKI->setObjectName(QStringLiteral("lineEdit_NKI"));
        sizePolicy.setHeightForWidth(lineEdit_NKI->sizePolicy().hasHeightForWidth());
        lineEdit_NKI->setSizePolicy(sizePolicy);
        lineEdit_NKI->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_6->addWidget(lineEdit_NKI);

        lineEdit_IntervalNum = new QLineEdit(groupBox_Settings);
        lineEdit_IntervalNum->setObjectName(QStringLiteral("lineEdit_IntervalNum"));
        sizePolicy.setHeightForWidth(lineEdit_IntervalNum->sizePolicy().hasHeightForWidth());
        lineEdit_IntervalNum->setSizePolicy(sizePolicy);
        lineEdit_IntervalNum->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_6->addWidget(lineEdit_IntervalNum);

        lineEdit_WindowStyle = new QLineEdit(groupBox_Settings);
        lineEdit_WindowStyle->setObjectName(QStringLiteral("lineEdit_WindowStyle"));
        sizePolicy.setHeightForWidth(lineEdit_WindowStyle->sizePolicy().hasHeightForWidth());
        lineEdit_WindowStyle->setSizePolicy(sizePolicy);
        lineEdit_WindowStyle->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_6->addWidget(lineEdit_WindowStyle);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalLayout_4->setStretch(0, 5);
        horizontalLayout_4->setStretch(1, 5);

        verticalLayout_2->addWidget(groupBox_Settings);

        groupBox_AvailableMaintypes = new QGroupBox(centralWidget);
        groupBox_AvailableMaintypes->setObjectName(QStringLiteral("groupBox_AvailableMaintypes"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_AvailableMaintypes->sizePolicy().hasHeightForWidth());
        groupBox_AvailableMaintypes->setSizePolicy(sizePolicy3);
        groupBox_AvailableMaintypes->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_AvailableMaintypes);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_NumberstoLearn = new QLineEdit(groupBox_AvailableMaintypes);
        lineEdit_NumberstoLearn->setObjectName(QStringLiteral("lineEdit_NumberstoLearn"));
        sizePolicy.setHeightForWidth(lineEdit_NumberstoLearn->sizePolicy().hasHeightForWidth());
        lineEdit_NumberstoLearn->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(lineEdit_NumberstoLearn);


        verticalLayout_2->addWidget(groupBox_AvailableMaintypes);

        groupBox_Controls = new QGroupBox(centralWidget);
        groupBox_Controls->setObjectName(QStringLiteral("groupBox_Controls"));
        sizePolicy3.setHeightForWidth(groupBox_Controls->sizePolicy().hasHeightForWidth());
        groupBox_Controls->setSizePolicy(sizePolicy3);
        groupBox_Controls->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_2 = new QHBoxLayout(groupBox_Controls);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_Start = new QPushButton(groupBox_Controls);
        pushButton_Start->setObjectName(QStringLiteral("pushButton_Start"));

        horizontalLayout_2->addWidget(pushButton_Start);

        pushButton_Quit = new QPushButton(groupBox_Controls);
        pushButton_Quit->setObjectName(QStringLiteral("pushButton_Quit"));

        horizontalLayout_2->addWidget(pushButton_Quit);


        verticalLayout_2->addWidget(groupBox_Controls);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 84);
        horizontalLayout->setStretch(1, 16);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mamsds QJoint Learning Tool", Q_NULLPTR));
        groupBox_DBContent->setTitle(QApplication::translate("MainWindow", "Database Content", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Statistics", Q_NULLPTR));
        groupBox_Settings->setTitle(QApplication::translate("MainWindow", "Setting", Q_NULLPTR));
        label_ClientName->setText(QApplication::translate("MainWindow", "Client Name", Q_NULLPTR));
        label_Fontsize->setText(QApplication::translate("MainWindow", "Font Size", Q_NULLPTR));
        label_NKI->setText(QApplication::translate("MainWindow", "New KU Index", Q_NULLPTR));
        label_IntervalNum->setText(QApplication::translate("MainWindow", "Interval, Number", Q_NULLPTR));
        label_WindowStyle->setText(QApplication::translate("MainWindow", "Window Location", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEdit_IntervalNum->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lineEdit_WindowStyle->setInputMask(QApplication::translate("MainWindow", "9999", Q_NULLPTR));
        groupBox_AvailableMaintypes->setTitle(QApplication::translate("MainWindow", "Practice Schedule", Q_NULLPTR));
        lineEdit_NumberstoLearn->setPlaceholderText(QString());
        groupBox_Controls->setTitle(QApplication::translate("MainWindow", "Control", Q_NULLPTR));
        pushButton_Start->setText(QApplication::translate("MainWindow", "Start!", Q_NULLPTR));
        pushButton_Quit->setText(QApplication::translate("MainWindow", "Quit...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
