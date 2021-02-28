/********************************************************************************
** Form generated from reading UI file 'practicewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICEWINDOW_H
#define UI_PRACTICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PracticeWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_Question;
    QTextEdit *textEdit_Answer;
    QTextEdit *textEdit_Draft;
    QTextEdit *textEdit_DraftAndroid;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEdit_Info;
    QProgressBar *progressBar_Learning;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_PassingScore;
    QLineEdit *lineEdit_PassingScore;
    QLabel *label_Score;
    QComboBox *comboBox_Score;
    QLabel *Label_NewScore;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Switch;
    QPushButton *pushButton_Skip;
    QPushButton *pushButton_Check;
    QPushButton *pushButton_Next;

    void setupUi(QMainWindow *PracticeWindow)
    {
        if (PracticeWindow->objectName().isEmpty())
            PracticeWindow->setObjectName(QStringLiteral("PracticeWindow"));
        PracticeWindow->resize(1011, 708);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Main.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PracticeWindow->setWindowIcon(icon);
        centralwidget = new QWidget(PracticeWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit_Question = new QTextEdit(centralwidget);
        textEdit_Question->setObjectName(QStringLiteral("textEdit_Question"));
        textEdit_Question->setAcceptRichText(false);

        verticalLayout->addWidget(textEdit_Question);

        textEdit_Answer = new QTextEdit(centralwidget);
        textEdit_Answer->setObjectName(QStringLiteral("textEdit_Answer"));
        textEdit_Answer->setAcceptRichText(false);

        verticalLayout->addWidget(textEdit_Answer);

        textEdit_Draft = new QTextEdit(centralwidget);
        textEdit_Draft->setObjectName(QStringLiteral("textEdit_Draft"));
        textEdit_Draft->setAcceptRichText(false);

        verticalLayout->addWidget(textEdit_Draft);

        textEdit_DraftAndroid = new QTextEdit(centralwidget);
        textEdit_DraftAndroid->setObjectName(QStringLiteral("textEdit_DraftAndroid"));

        verticalLayout->addWidget(textEdit_DraftAndroid);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        textEdit_Info = new QTextEdit(centralwidget);
        textEdit_Info->setObjectName(QStringLiteral("textEdit_Info"));
        textEdit_Info->setReadOnly(true);
        textEdit_Info->setAcceptRichText(false);

        horizontalLayout_5->addWidget(textEdit_Info);

        progressBar_Learning = new QProgressBar(centralwidget);
        progressBar_Learning->setObjectName(QStringLiteral("progressBar_Learning"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar_Learning->sizePolicy().hasHeightForWidth());
        progressBar_Learning->setSizePolicy(sizePolicy);
        progressBar_Learning->setMinimumSize(QSize(0, 0));
        progressBar_Learning->setValue(24);
        progressBar_Learning->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_5->addWidget(progressBar_Learning);

        horizontalLayout_5->setStretch(0, 95);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_PassingScore = new QLabel(centralwidget);
        label_PassingScore->setObjectName(QStringLiteral("label_PassingScore"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_PassingScore->sizePolicy().hasHeightForWidth());
        label_PassingScore->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_PassingScore);

        lineEdit_PassingScore = new QLineEdit(centralwidget);
        lineEdit_PassingScore->setObjectName(QStringLiteral("lineEdit_PassingScore"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_PassingScore->sizePolicy().hasHeightForWidth());
        lineEdit_PassingScore->setSizePolicy(sizePolicy2);
        lineEdit_PassingScore->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_PassingScore->setMaxLength(3);

        horizontalLayout_4->addWidget(lineEdit_PassingScore);

        label_Score = new QLabel(centralwidget);
        label_Score->setObjectName(QStringLiteral("label_Score"));
        sizePolicy1.setHeightForWidth(label_Score->sizePolicy().hasHeightForWidth());
        label_Score->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_Score);

        comboBox_Score = new QComboBox(centralwidget);
        comboBox_Score->setObjectName(QStringLiteral("comboBox_Score"));
        sizePolicy2.setHeightForWidth(comboBox_Score->sizePolicy().hasHeightForWidth());
        comboBox_Score->setSizePolicy(sizePolicy2);
        comboBox_Score->setMaximumSize(QSize(16777215, 16777215));
        comboBox_Score->setEditable(true);
        comboBox_Score->setMaxVisibleItems(14);

        horizontalLayout_4->addWidget(comboBox_Score);

        Label_NewScore = new QLabel(centralwidget);
        Label_NewScore->setObjectName(QStringLiteral("Label_NewScore"));
        sizePolicy1.setHeightForWidth(Label_NewScore->sizePolicy().hasHeightForWidth());
        Label_NewScore->setSizePolicy(sizePolicy1);
        Label_NewScore->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(Label_NewScore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Switch = new QPushButton(centralwidget);
        pushButton_Switch->setObjectName(QStringLiteral("pushButton_Switch"));

        horizontalLayout_4->addWidget(pushButton_Switch);

        pushButton_Skip = new QPushButton(centralwidget);
        pushButton_Skip->setObjectName(QStringLiteral("pushButton_Skip"));
        sizePolicy1.setHeightForWidth(pushButton_Skip->sizePolicy().hasHeightForWidth());
        pushButton_Skip->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pushButton_Skip);

        pushButton_Check = new QPushButton(centralwidget);
        pushButton_Check->setObjectName(QStringLiteral("pushButton_Check"));
        sizePolicy1.setHeightForWidth(pushButton_Check->sizePolicy().hasHeightForWidth());
        pushButton_Check->setSizePolicy(sizePolicy1);
        pushButton_Check->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(pushButton_Check);

        pushButton_Next = new QPushButton(centralwidget);
        pushButton_Next->setObjectName(QStringLiteral("pushButton_Next"));
        sizePolicy1.setHeightForWidth(pushButton_Next->sizePolicy().hasHeightForWidth());
        pushButton_Next->setSizePolicy(sizePolicy1);
        pushButton_Next->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(pushButton_Next);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);
        horizontalLayout_4->setStretch(4, 1);
        horizontalLayout_4->setStretch(5, 10);
        horizontalLayout_4->setStretch(7, 1);
        horizontalLayout_4->setStretch(8, 1);
        horizontalLayout_4->setStretch(9, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        PracticeWindow->setCentralWidget(centralwidget);

        retranslateUi(PracticeWindow);

        QMetaObject::connectSlotsByName(PracticeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PracticeWindow)
    {
        PracticeWindow->setWindowTitle(QApplication::translate("PracticeWindow", "QJLT - Practice", Q_NULLPTR));
        label_PassingScore->setText(QApplication::translate("PracticeWindow", "Passing", Q_NULLPTR));
        label_Score->setText(QApplication::translate("PracticeWindow", "Score", Q_NULLPTR));
        Label_NewScore->setText(QApplication::translate("PracticeWindow", ": <null>", Q_NULLPTR));
        pushButton_Switch->setText(QApplication::translate("PracticeWindow", "Draft", Q_NULLPTR));
        pushButton_Skip->setText(QApplication::translate("PracticeWindow", "Skip", Q_NULLPTR));
        pushButton_Check->setText(QApplication::translate("PracticeWindow", "Check", Q_NULLPTR));
        pushButton_Next->setText(QApplication::translate("PracticeWindow", "Next", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PracticeWindow: public Ui_PracticeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICEWINDOW_H
