/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QWidget *gridWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *username;
    QLineEdit *userline;
    QLabel *password;
    QLineEdit *passline;
    QSpacerItem *verticalSpacer_4;
    QPushButton *login;
    QSpacerItem *horizontalSpacer;
    QWidget *gridWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *username_2;
    QLineEdit *userline_2;
    QLabel *password_2;
    QLineEdit *passline_2;
    QSpacerItem *verticalSpacer_6;
    QPushButton *signup;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(506, 435);
        MainWindow->setStyleSheet(QLatin1String("background-color:qlineargradient(spread:pad, x1:0.00568182, y1:0, x2:1, y2:1, stop:0 rgba(13, 0, 234, 255), stop:1 rgba(255, 255, 255, 255));\n"
"QPushButton{\n"
"background-color: white;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setStyleSheet(QLatin1String("\n"
"background-color:none;"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        gridWidget = new QWidget(horizontalWidget);
        gridWidget->setObjectName(QStringLiteral("gridWidget"));
        gridWidget->setMaximumSize(QSize(1000, 16777215));
        gridWidget->setStyleSheet(QLatin1String("background-color:lightblue;\n"
"border-radius: 10px 10px;"));
        verticalLayout_4 = new QVBoxLayout(gridWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(gridWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Times New Roman\";"));

        verticalLayout_4->addWidget(label, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        username = new QLabel(gridWidget);
        username->setObjectName(QStringLiteral("username"));

        verticalLayout_4->addWidget(username);

        userline = new QLineEdit(gridWidget);
        userline->setObjectName(QStringLiteral("userline"));
        userline->setStyleSheet(QLatin1String("background-color:white;\n"
"border: 1px solid black;\n"
""));

        verticalLayout_4->addWidget(userline);

        password = new QLabel(gridWidget);
        password->setObjectName(QStringLiteral("password"));

        verticalLayout_4->addWidget(password);

        passline = new QLineEdit(gridWidget);
        passline->setObjectName(QStringLiteral("passline"));
        passline->setStyleSheet(QLatin1String("background-color:white;\n"
"border: 1px solid black;"));

        verticalLayout_4->addWidget(passline);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        login = new QPushButton(gridWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setStyleSheet(QLatin1String("background-color :rgb(51, 194, 255);\n"
"padding : 5px;"));

        verticalLayout_4->addWidget(login);


        horizontalLayout->addWidget(gridWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridWidget_2 = new QWidget(horizontalWidget);
        gridWidget_2->setObjectName(QStringLiteral("gridWidget_2"));
        gridWidget_2->setMaximumSize(QSize(1000, 16777215));
        gridWidget_2->setStyleSheet(QLatin1String("background-color:lightgreen;\n"
"border-radius: 10px 10px;"));
        verticalLayout_5 = new QVBoxLayout(gridWidget_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(20, 20, 20, 20);
        label_2 = new QLabel(gridWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"Times New Roman\";"));

        verticalLayout_5->addWidget(label_2, 0, Qt::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        username_2 = new QLabel(gridWidget_2);
        username_2->setObjectName(QStringLiteral("username_2"));

        verticalLayout_5->addWidget(username_2);

        userline_2 = new QLineEdit(gridWidget_2);
        userline_2->setObjectName(QStringLiteral("userline_2"));
        userline_2->setStyleSheet(QLatin1String("background-color:white;\n"
"border: 1px solid black;\n"
""));

        verticalLayout_5->addWidget(userline_2);

        password_2 = new QLabel(gridWidget_2);
        password_2->setObjectName(QStringLiteral("password_2"));

        verticalLayout_5->addWidget(password_2);

        passline_2 = new QLineEdit(gridWidget_2);
        passline_2->setObjectName(QStringLiteral("passline_2"));
        passline_2->setStyleSheet(QLatin1String("background-color:white;\n"
"border: 1px solid black;"));

        verticalLayout_5->addWidget(passline_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        signup = new QPushButton(gridWidget_2);
        signup->setObjectName(QStringLiteral("signup"));
        signup->setStyleSheet(QLatin1String("background-color :rgb(55, 212, 73);\n"
"padding : 5px;\n"
"hover: {background-color:white;} \n"
"\n"
""));

        verticalLayout_5->addWidget(signup);


        horizontalLayout->addWidget(gridWidget_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(horizontalWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Login Here", Q_NULLPTR));
        username->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        password->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sign up Here", Q_NULLPTR));
        username_2->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        password_2->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        signup->setText(QApplication::translate("MainWindow", "Sign up", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
