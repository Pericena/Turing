/********************************************************************************
** Form generated from reading UI file 'mainwindowozEDFs.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWOZEDFS_H
#define MAINWINDOWOZEDFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *action_12;
    QAction *action_14;
    QAction *actionQT;
    QAction *action_15;
    QAction *action_16;
    QAction *action_17;
    QAction *action_18;
    QAction *action_19;
    QAction *action_11;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QPlainTextEdit *problemBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *input_alphabetBox;
    QLabel *label_5;
    QLineEdit *additional_alphabetBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addRowBtn;
    QPushButton *delRowBtn;
    QTableWidget *tableWidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QPlainTextEdit *commentsBox;
    QMenuBar *menubar;
    QMenu *menu1;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(926, 640);
        MainWindow->setAutoFillBackground(true);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        action_6 = new QAction(MainWindow);
        action_6->setObjectName("action_6");
        action_7 = new QAction(MainWindow);
        action_7->setObjectName("action_7");
        action_8 = new QAction(MainWindow);
        action_8->setObjectName("action_8");
        action_9 = new QAction(MainWindow);
        action_9->setObjectName("action_9");
        action_10 = new QAction(MainWindow);
        action_10->setObjectName("action_10");
        action_12 = new QAction(MainWindow);
        action_12->setObjectName("action_12");
        action_14 = new QAction(MainWindow);
        action_14->setObjectName("action_14");
        actionQT = new QAction(MainWindow);
        actionQT->setObjectName("actionQT");
        action_15 = new QAction(MainWindow);
        action_15->setObjectName("action_15");
        action_15->setCheckable(true);
        action_16 = new QAction(MainWindow);
        action_16->setObjectName("action_16");
        action_16->setCheckable(true);
        action_17 = new QAction(MainWindow);
        action_17->setObjectName("action_17");
        action_17->setCheckable(true);
        action_17->setChecked(true);
        action_18 = new QAction(MainWindow);
        action_18->setObjectName("action_18");
        action_18->setCheckable(true);
        action_19 = new QAction(MainWindow);
        action_19->setObjectName("action_19");
        action_19->setCheckable(true);
        action_11 = new QAction(MainWindow);
        action_11->setObjectName("action_11");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        problemBox = new QPlainTextEdit(verticalLayoutWidget);
        problemBox->setObjectName("problemBox");
        problemBox->setFont(font);

        verticalLayout_4->addWidget(problemBox);

        splitter_2->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_3 = new QWidget(splitter_2);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 37, -1, -1);
        leftButton = new QPushButton(verticalLayoutWidget_3);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(0, 40));
        leftButton->setMaximumSize(QSize(20, 40));

        horizontalLayout_2->addWidget(leftButton, 0, Qt::AlignLeft);

        rightButton = new QPushButton(verticalLayoutWidget_3);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(0, 40));
        rightButton->setMaximumSize(QSize(20, 40));

        horizontalLayout_2->addWidget(rightButton, 0, Qt::AlignRight);


        verticalLayout_5->addLayout(horizontalLayout_2);

        splitter_2->addWidget(verticalLayoutWidget_3);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName("splitter");
        splitter->setMaximumSize(QSize(16777215, 16777215));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        input_alphabetBox = new QLineEdit(verticalLayoutWidget_2);
        input_alphabetBox->setObjectName("input_alphabetBox");
        input_alphabetBox->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, input_alphabetBox);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        additional_alphabetBox = new QLineEdit(verticalLayoutWidget_2);
        additional_alphabetBox->setObjectName("additional_alphabetBox");
        additional_alphabetBox->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, additional_alphabetBox);


        verticalLayout_6->addLayout(formLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        addRowBtn = new QPushButton(verticalLayoutWidget_2);
        addRowBtn->setObjectName("addRowBtn");
        addRowBtn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(addRowBtn, 0, Qt::AlignLeft);

        delRowBtn = new QPushButton(verticalLayoutWidget_2);
        delRowBtn->setObjectName("delRowBtn");
        delRowBtn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(delRowBtn, 0, Qt::AlignLeft);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_3);

        tableWidget = new QTableWidget(verticalLayoutWidget_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);

        verticalLayout_6->addWidget(tableWidget);

        splitter->addWidget(verticalLayoutWidget_2);
        verticalLayoutWidget_4 = new QWidget(splitter);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_7->addWidget(label_6, 0, Qt::AlignHCenter);

        commentsBox = new QPlainTextEdit(verticalLayoutWidget_4);
        commentsBox->setObjectName("commentsBox");
        commentsBox->setFont(font);
        commentsBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        commentsBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_7->addWidget(commentsBox);

        splitter->addWidget(verticalLayoutWidget_4);
        splitter_3->addWidget(splitter);

        verticalLayout_3->addWidget(splitter_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 926, 22));
        menu1 = new QMenu(menubar);
        menu1->setObjectName("menu1");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu1->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu1->addAction(action);
        menu1->addAction(action_2);
        menu1->addAction(action_3);
        menu1->addAction(action_4);
        menu->addAction(action_11);
        menu->addAction(action_5);
        menu->addAction(action_6);
        menu_2->addAction(action_7);
        menu_2->addAction(action_9);
        menu_2->addSeparator();
        menu_2->addAction(action_8);
        menu_3->addAction(action_15);
        menu_3->addAction(action_16);
        menu_3->addAction(action_17);
        menu_3->addAction(action_18);
        menu_3->addAction(action_19);
        menu_4->addAction(action_14);
        menu_4->addAction(actionQT);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Turing", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \321\210\320\260\320\263", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        action_10->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        action_12->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \321\210\320\260\320\263", nullptr));
        action_14->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        actionQT->setText(QCoreApplication::translate("MainWindow", "QT", nullptr));
        action_15->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\320\275\321\214 \320\261\321\213\321\201\321\202\321\200\320\276", nullptr));
        action_16->setText(QCoreApplication::translate("MainWindow", "\320\221\321\213\321\201\321\202\321\200\320\276", nullptr));
        action_17->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265", nullptr));
        action_18->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\320\273\320\265\320\275\320\275\320\276", nullptr));
        action_19->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\320\275\321\214 \320\274\320\265\320\264\320\273\320\265\320\275\320\275\320\276", nullptr));
        action_11->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "La tarea", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Alfabeto fuente", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Alfabeto adicional", nullptr));
        addRowBtn->setText(QCoreApplication::translate("MainWindow", "Insertar", nullptr));
        delRowBtn->setText(QCoreApplication::translate("MainWindow", "Borrar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Comentarios", nullptr));
        menu1->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "Cinta", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "Actuacion", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "Velocidad", nullptr));
        //menu_4->setTitle(QCoreApplication::translate("MainWindow", "Sobre el programa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWOZEDFS_H
