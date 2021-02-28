/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_Keyword_Prefix;
    QLineEdit *lineEdit_Keyword;
    QLineEdit *lineEdit_Keyword_Suffix;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboBox_Field;
    QComboBox *comboBox_Maintype_Search;
    QListWidget *listWidget_SearchResults;
    QPushButton *pushButton_NewKU;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit_Question;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_Answer;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_KUID;
    QLabel *label_Category;
    QComboBox *comboBox_Maintype_Meta;
    QLabel *label_TimesPracticed;
    QLineEdit *lineEdit_TimesPracticed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_PassingScore;
    QLabel *label_Deadline;
    QLineEdit *lineEdit_Deadline;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_InsertDate;
    QLabel *label_15;
    QLineEdit *lineEdit_1stPracticeDate;
    QLabel *label_16;
    QLineEdit *lineEdit_LastPracticeDate;
    QLabel *label_17;
    QLineEdit *lineEdit_PreviousScore;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_WriteDB;
    QPushButton *pushButton_Quit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(826, 643);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Utility.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEdit_Keyword_Prefix = new QLineEdit(groupBox);
        lineEdit_Keyword_Prefix->setObjectName(QStringLiteral("lineEdit_Keyword_Prefix"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Keyword_Prefix->sizePolicy().hasHeightForWidth());
        lineEdit_Keyword_Prefix->setSizePolicy(sizePolicy);
        lineEdit_Keyword_Prefix->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_7->addWidget(lineEdit_Keyword_Prefix);

        lineEdit_Keyword = new QLineEdit(groupBox);
        lineEdit_Keyword->setObjectName(QStringLiteral("lineEdit_Keyword"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_Keyword->sizePolicy().hasHeightForWidth());
        lineEdit_Keyword->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(lineEdit_Keyword);

        lineEdit_Keyword_Suffix = new QLineEdit(groupBox);
        lineEdit_Keyword_Suffix->setObjectName(QStringLiteral("lineEdit_Keyword_Suffix"));
        sizePolicy.setHeightForWidth(lineEdit_Keyword_Suffix->sizePolicy().hasHeightForWidth());
        lineEdit_Keyword_Suffix->setSizePolicy(sizePolicy);
        lineEdit_Keyword_Suffix->setMaximumSize(QSize(25, 16777215));
        lineEdit_Keyword_Suffix->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lineEdit_Keyword_Suffix);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_12);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_14);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_13);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        comboBox_Field = new QComboBox(groupBox);
        comboBox_Field->setObjectName(QStringLiteral("comboBox_Field"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_Field->sizePolicy().hasHeightForWidth());
        comboBox_Field->setSizePolicy(sizePolicy2);
        comboBox_Field->setEditable(false);

        verticalLayout_6->addWidget(comboBox_Field);

        comboBox_Maintype_Search = new QComboBox(groupBox);
        comboBox_Maintype_Search->setObjectName(QStringLiteral("comboBox_Maintype_Search"));
        sizePolicy2.setHeightForWidth(comboBox_Maintype_Search->sizePolicy().hasHeightForWidth());
        comboBox_Maintype_Search->setSizePolicy(sizePolicy2);
        comboBox_Maintype_Search->setEditable(true);

        verticalLayout_6->addWidget(comboBox_Maintype_Search);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        listWidget_SearchResults = new QListWidget(groupBox);
        listWidget_SearchResults->setObjectName(QStringLiteral("listWidget_SearchResults"));

        verticalLayout->addWidget(listWidget_SearchResults);

        pushButton_NewKU = new QPushButton(groupBox);
        pushButton_NewKU->setObjectName(QStringLiteral("pushButton_NewKU"));

        verticalLayout->addWidget(pushButton_NewKU);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        plainTextEdit_Question = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Question->setObjectName(QStringLiteral("plainTextEdit_Question"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(plainTextEdit_Question->sizePolicy().hasHeightForWidth());
        plainTextEdit_Question->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(plainTextEdit_Question);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        plainTextEdit_Answer = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Answer->setObjectName(QStringLiteral("plainTextEdit_Answer"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(8);
        sizePolicy4.setHeightForWidth(plainTextEdit_Answer->sizePolicy().hasHeightForWidth());
        plainTextEdit_Answer->setSizePolicy(sizePolicy4);

        verticalLayout_2->addWidget(plainTextEdit_Answer);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        lineEdit_KUID = new QLineEdit(groupBox_2);
        lineEdit_KUID->setObjectName(QStringLiteral("lineEdit_KUID"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(3);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit_KUID->sizePolicy().hasHeightForWidth());
        lineEdit_KUID->setSizePolicy(sizePolicy5);
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_KUID->setPalette(palette);
        lineEdit_KUID->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_KUID);

        label_Category = new QLabel(groupBox_2);
        label_Category->setObjectName(QStringLiteral("label_Category"));

        horizontalLayout_3->addWidget(label_Category);

        comboBox_Maintype_Meta = new QComboBox(groupBox_2);
        comboBox_Maintype_Meta->setObjectName(QStringLiteral("comboBox_Maintype_Meta"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(5);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(comboBox_Maintype_Meta->sizePolicy().hasHeightForWidth());
        comboBox_Maintype_Meta->setSizePolicy(sizePolicy6);
        comboBox_Maintype_Meta->setEditable(true);

        horizontalLayout_3->addWidget(comboBox_Maintype_Meta);

        label_TimesPracticed = new QLabel(groupBox_2);
        label_TimesPracticed->setObjectName(QStringLiteral("label_TimesPracticed"));

        horizontalLayout_3->addWidget(label_TimesPracticed);

        lineEdit_TimesPracticed = new QLineEdit(groupBox_2);
        lineEdit_TimesPracticed->setObjectName(QStringLiteral("lineEdit_TimesPracticed"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_TimesPracticed->setPalette(palette1);
        lineEdit_TimesPracticed->setAutoFillBackground(false);
        lineEdit_TimesPracticed->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_TimesPracticed);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        lineEdit_PassingScore = new QLineEdit(groupBox_2);
        lineEdit_PassingScore->setObjectName(QStringLiteral("lineEdit_PassingScore"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(2);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lineEdit_PassingScore->sizePolicy().hasHeightForWidth());
        lineEdit_PassingScore->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(lineEdit_PassingScore);

        label_Deadline = new QLabel(groupBox_2);
        label_Deadline->setObjectName(QStringLiteral("label_Deadline"));

        horizontalLayout_2->addWidget(label_Deadline);

        lineEdit_Deadline = new QLineEdit(groupBox_2);
        lineEdit_Deadline->setObjectName(QStringLiteral("lineEdit_Deadline"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(8);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lineEdit_Deadline->sizePolicy().hasHeightForWidth());
        lineEdit_Deadline->setSizePolicy(sizePolicy8);
        lineEdit_Deadline->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(lineEdit_Deadline);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_InsertDate = new QLineEdit(groupBox_2);
        lineEdit_InsertDate->setObjectName(QStringLiteral("lineEdit_InsertDate"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(4);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(lineEdit_InsertDate->sizePolicy().hasHeightForWidth());
        lineEdit_InsertDate->setSizePolicy(sizePolicy9);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_InsertDate->setPalette(palette2);
        lineEdit_InsertDate->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_InsertDate);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_6->addWidget(label_15);

        lineEdit_1stPracticeDate = new QLineEdit(groupBox_2);
        lineEdit_1stPracticeDate->setObjectName(QStringLiteral("lineEdit_1stPracticeDate"));
        sizePolicy9.setHeightForWidth(lineEdit_1stPracticeDate->sizePolicy().hasHeightForWidth());
        lineEdit_1stPracticeDate->setSizePolicy(sizePolicy9);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_1stPracticeDate->setPalette(palette3);
        lineEdit_1stPracticeDate->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_1stPracticeDate);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_6->addWidget(label_16);

        lineEdit_LastPracticeDate = new QLineEdit(groupBox_2);
        lineEdit_LastPracticeDate->setObjectName(QStringLiteral("lineEdit_LastPracticeDate"));
        sizePolicy9.setHeightForWidth(lineEdit_LastPracticeDate->sizePolicy().hasHeightForWidth());
        lineEdit_LastPracticeDate->setSizePolicy(sizePolicy9);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_LastPracticeDate->setPalette(palette4);
        lineEdit_LastPracticeDate->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_LastPracticeDate);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_6->addWidget(label_17);

        lineEdit_PreviousScore = new QLineEdit(groupBox_2);
        lineEdit_PreviousScore->setObjectName(QStringLiteral("lineEdit_PreviousScore"));
        sizePolicy7.setHeightForWidth(lineEdit_PreviousScore->sizePolicy().hasHeightForWidth());
        lineEdit_PreviousScore->setSizePolicy(sizePolicy7);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_PreviousScore->setPalette(palette5);
        lineEdit_PreviousScore->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_PreviousScore);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Delete = new QPushButton(groupBox_2);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));

        horizontalLayout_4->addWidget(pushButton_Delete);

        pushButton_WriteDB = new QPushButton(groupBox_2);
        pushButton_WriteDB->setObjectName(QStringLiteral("pushButton_WriteDB"));

        horizontalLayout_4->addWidget(pushButton_WriteDB);

        pushButton_Quit = new QPushButton(groupBox_2);
        pushButton_Quit->setObjectName(QStringLiteral("pushButton_Quit"));

        horizontalLayout_4->addWidget(pushButton_Quit);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addWidget(groupBox_2);

        horizontalLayout_5->setStretch(0, 25);
        horizontalLayout_5->setStretch(1, 75);

        verticalLayout_7->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mamsds QJLT - DB Utility", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        lineEdit_Keyword_Prefix->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        lineEdit_Keyword_Suffix->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IF", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "AND", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Field", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Category", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        pushButton_NewKU->setText(QApplication::translate("MainWindow", "New KnowledgeUnit", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Knowledge Unit", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Question", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Answer", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Meta Info", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "KUID", Q_NULLPTR));
        label_Category->setText(QApplication::translate("MainWindow", "Category", Q_NULLPTR));
        label_TimesPracticed->setText(QApplication::translate("MainWindow", "Times Practiced", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Passing Score", Q_NULLPTR));
        label_Deadline->setText(QApplication::translate("MainWindow", "Deadline", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Insert", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "First", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Last", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Score", Q_NULLPTR));
        pushButton_Delete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        pushButton_WriteDB->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        pushButton_Quit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
