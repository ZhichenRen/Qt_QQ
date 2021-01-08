/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "menubutton.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextBrowser *messageBrowser;
    QTextEdit *messageTextEdit;
    QPushButton *sendButton;
    QFrame *line;
    QFrame *line_2;
    QFontComboBox *fontComboBox;
    QComboBox *sizeComboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *boldToolButton;
    QToolButton *italicToolButton;
    QToolButton *underlineToolButton;
    QToolButton *colorToolButton;
    QToolButton *sendToolButton;
    QToolButton *saveToolButton;
    QToolButton *clearToolButton;
    QToolButton *checkMessageButton;
    QFrame *line_3;
    QToolButton *toolButton_8;
    QLabel *label;
    QLabel *username;
    QLabel *userNumLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    MenuButton *menuButton;
    QToolButton *minButton;
    QToolButton *maxButton;
    QToolButton *closeButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *userListLabel;
    QTableWidget *userTableWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *searchBox;
    QPushButton *searchButton;
    QWidget *page_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(750, 500);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(750, 500));
        Widget->setMaximumSize(QSize(750, 500));
        Widget->setAutoFillBackground(false);
        Widget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(5, 5, 740, 490));
        stackedWidget->setMinimumSize(QSize(740, 490));
        stackedWidget->setMaximumSize(QSize(740, 490));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackWidget\n"
"{\n"
"	border-radius:15px;\n"
"}"));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Sunken);
        stackedWidget->setLineWidth(1);
        stackedWidget->setMidLineWidth(0);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        messageBrowser = new QTextBrowser(page);
        messageBrowser->setObjectName(QString::fromUtf8("messageBrowser"));
        messageBrowser->setGeometry(QRect(10, 90, 480, 250));
        messageBrowser->setMinimumSize(QSize(480, 250));
        messageBrowser->setMaximumSize(QSize(480, 250));
        QFont font;
        font.setPointSize(12);
        messageBrowser->setFont(font);
        messageBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser { background-color: rgb(255, 255, 255,0); border-radius: 3px; color: rgb(0, 0, 0); }"));
        messageBrowser->setLineWidth(1);
        messageBrowser->setTabStopWidth(80);
        messageBrowser->setCursorWidth(1);
        messageTextEdit = new QTextEdit(page);
        messageTextEdit->setObjectName(QString::fromUtf8("messageTextEdit"));
        messageTextEdit->setGeometry(QRect(10, 390, 480, 70));
        messageTextEdit->setMinimumSize(QSize(480, 70));
        messageTextEdit->setMaximumSize(QSize(16777215, 16777215));
        messageTextEdit->setFont(font);
        messageTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit { background-color: rgb(255, 255, 255,0); border-radius: 3px;color: rgb(0, 0, 0);  }\n"
"\n"
"\n"
""));
        messageTextEdit->setLineWidth(1);
        sendButton = new QPushButton(page);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(410, 450, 60, 25));
        sendButton->setMinimumSize(QSize(60, 25));
        sendButton->setMaximumSize(QSize(103, 41));
        sendButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QPushButton:hover { background-color: rgb(50, 50, 50,255);}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/sendMessage.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon);
        sendButton->setIconSize(QSize(30, 30));
        line = new QFrame(page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 347, 480, 2));
        line->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 125);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(page);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(490, 80, 2, 415));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 125);"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        fontComboBox = new QFontComboBox(page);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setEnabled(true);
        fontComboBox->setGeometry(QRect(10, 350, 120, 30));
        fontComboBox->setMinimumSize(QSize(120, 30));
        fontComboBox->setMaximumSize(QSize(120, 30));
        fontComboBox->setFont(font);
        fontComboBox->setMouseTracking(false);
        fontComboBox->setAcceptDrops(false);
        fontComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"    /*min-width: 9em;   \347\273\204\345\220\210\346\241\206\347\232\204\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/QComboBox);\n"
"}\n"
"QComboBox::drop-down:hover { background-color: rgb(50, 50, 50,255);}"));
        fontComboBox->setEditable(false);
        sizeComboBox = new QComboBox(page);
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));
        sizeComboBox->setGeometry(QRect(140, 350, 45, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(sizeComboBox->sizePolicy().hasHeightForWidth());
        sizeComboBox->setSizePolicy(sizePolicy1);
        sizeComboBox->setMinimumSize(QSize(45, 30));
        sizeComboBox->setMaximumSize(QSize(45, 30));
        sizeComboBox->setFont(font);
        sizeComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"    /*min-width: 9em;   \347\273\204\345\220\210\346\241\206\347\232\204\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/QComboBox);\n"
"}\n"
"QComboBox::drop-down:hover { background-color: rgb(50, 50, 50,255);}"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 350, 288, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        boldToolButton = new QToolButton(layoutWidget);
        boldToolButton->setObjectName(QString::fromUtf8("boldToolButton"));
        boldToolButton->setMinimumSize(QSize(30, 30));
        boldToolButton->setMaximumSize(QSize(30, 30));
        boldToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/bold2.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldToolButton->setIcon(icon1);
        boldToolButton->setCheckable(true);

        horizontalLayout->addWidget(boldToolButton);

        italicToolButton = new QToolButton(layoutWidget);
        italicToolButton->setObjectName(QString::fromUtf8("italicToolButton"));
        italicToolButton->setMinimumSize(QSize(30, 30));
        italicToolButton->setMaximumSize(QSize(30, 30));
        italicToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/italic3.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicToolButton->setIcon(icon2);
        italicToolButton->setCheckable(true);

        horizontalLayout->addWidget(italicToolButton);

        underlineToolButton = new QToolButton(layoutWidget);
        underlineToolButton->setObjectName(QString::fromUtf8("underlineToolButton"));
        underlineToolButton->setMinimumSize(QSize(30, 30));
        underlineToolButton->setMaximumSize(QSize(30, 30));
        underlineToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/underline2.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineToolButton->setIcon(icon3);
        underlineToolButton->setCheckable(true);

        horizontalLayout->addWidget(underlineToolButton);

        colorToolButton = new QToolButton(layoutWidget);
        colorToolButton->setObjectName(QString::fromUtf8("colorToolButton"));
        colorToolButton->setMinimumSize(QSize(30, 30));
        colorToolButton->setMaximumSize(QSize(30, 30));
        colorToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/color2.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorToolButton->setIcon(icon4);

        horizontalLayout->addWidget(colorToolButton);

        sendToolButton = new QToolButton(layoutWidget);
        sendToolButton->setObjectName(QString::fromUtf8("sendToolButton"));
        sendToolButton->setMinimumSize(QSize(30, 30));
        sendToolButton->setMaximumSize(QSize(30, 30));
        sendToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendToolButton->setIcon(icon5);

        horizontalLayout->addWidget(sendToolButton);

        saveToolButton = new QToolButton(layoutWidget);
        saveToolButton->setObjectName(QString::fromUtf8("saveToolButton"));
        saveToolButton->setMinimumSize(QSize(30, 30));
        saveToolButton->setMaximumSize(QSize(30, 30));
        saveToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveToolButton->setIcon(icon6);

        horizontalLayout->addWidget(saveToolButton);

        clearToolButton = new QToolButton(layoutWidget);
        clearToolButton->setObjectName(QString::fromUtf8("clearToolButton"));
        clearToolButton->setMinimumSize(QSize(30, 30));
        clearToolButton->setMaximumSize(QSize(30, 30));
        clearToolButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolButton->setIcon(icon7);

        horizontalLayout->addWidget(clearToolButton);

        checkMessageButton = new QToolButton(layoutWidget);
        checkMessageButton->setObjectName(QString::fromUtf8("checkMessageButton"));
        checkMessageButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/messageList.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkMessageButton->setIcon(icon8);

        horizontalLayout->addWidget(checkMessageButton);

        line_3 = new QFrame(page);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 80, 480, 2));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 125);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        toolButton_8 = new QToolButton(page);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        toolButton_8->setGeometry(QRect(10, 10, 60, 60));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(40);
        sizePolicy2.setVerticalStretch(40);
        sizePolicy2.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy2);
        toolButton_8->setMinimumSize(QSize(60, 60));
        toolButton_8->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/avatar.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_8->setIcon(icon9);
        toolButton_8->setIconSize(QSize(60, 60));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 161, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        label->setFont(font1);
        username = new QLabel(page);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(80, 10, 141, 25));
        username->setMinimumSize(QSize(100, 25));
        username->setBaseSize(QSize(100, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        username->setFont(font2);
        userNumLabel = new QLabel(page);
        userNumLabel->setObjectName(QString::fromUtf8("userNumLabel"));
        userNumLabel->setGeometry(QRect(480, 460, 135, 30));
        userNumLabel->setMinimumSize(QSize(135, 30));
        userNumLabel->setMaximumSize(QSize(157, 41));
        QFont font3;
        font3.setPointSize(9);
        userNumLabel->setFont(font3);
        userNumLabel->setStyleSheet(QString::fromUtf8(""));
        userNumLabel->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(602, -1, 143, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        menuButton = new MenuButton(layoutWidget1);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setMinimumSize(QSize(30, 30));
        menuButton->setMaximumSize(QSize(30, 30));
        menuButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QPushButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuButton->setIcon(icon10);

        horizontalLayout_3->addWidget(menuButton);

        minButton = new QToolButton(layoutWidget1);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        minButton->setMinimumSize(QSize(30, 30));
        minButton->setMaximumSize(QSize(30, 30));
        minButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        minButton->setIcon(icon11);

        horizontalLayout_3->addWidget(minButton);

        maxButton = new QToolButton(layoutWidget1);
        maxButton->setObjectName(QString::fromUtf8("maxButton"));
        maxButton->setMinimumSize(QSize(30, 30));
        maxButton->setMaximumSize(QSize(30, 30));
        maxButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/max.png"), QSize(), QIcon::Normal, QIcon::Off);
        maxButton->setIcon(icon12);

        horizontalLayout_3->addWidget(maxButton);

        closeButton = new QToolButton(layoutWidget1);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(30, 30));
        closeButton->setMaximumSize(QSize(30, 30));
        closeButton->setStyleSheet(QString::fromUtf8("QToolButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QToolButton:hover { background-color: rgb(50, 50, 50,255);}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon13);

        horizontalLayout_3->addWidget(closeButton);

        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(489, 122, 261, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userListLabel = new QPushButton(verticalLayoutWidget);
        userListLabel->setObjectName(QString::fromUtf8("userListLabel"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        userListLabel->setFont(font4);
        userListLabel->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(0, 0, 0); font-size: 18px; }"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/userlist (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        userListLabel->setIcon(icon14);

        verticalLayout->addWidget(userListLabel);

        userTableWidget = new QTableWidget(verticalLayoutWidget);
        if (userTableWidget->columnCount() < 3)
            userTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setBackground(QColor(0, 0, 0));
        userTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        userTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        userTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        userTableWidget->setObjectName(QString::fromUtf8("userTableWidget"));
        userTableWidget->setEnabled(true);
        userTableWidget->setMinimumSize(QSize(254, 480));
        userTableWidget->setMaximumSize(QSize(255, 580));
        QFont font5;
        font5.setPointSize(8);
        userTableWidget->setFont(font5);
        userTableWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        userTableWidget->setStyleSheet(QString::fromUtf8("QTableWidget { background-color: rgb(255, 132, 139,0); border-radius: 3px; color: rgb(0,0,0); }"));
        userTableWidget->setAlternatingRowColors(false);
        userTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        userTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        userTableWidget->setShowGrid(false);
        userTableWidget->setGridStyle(Qt::SolidLine);
        userTableWidget->horizontalHeader()->setVisible(false);
        userTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        userTableWidget->horizontalHeader()->setMinimumSectionSize(83);
        userTableWidget->horizontalHeader()->setDefaultSectionSize(83);
        userTableWidget->horizontalHeader()->setHighlightSections(false);
        userTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        userTableWidget->horizontalHeader()->setStretchLastSection(false);
        userTableWidget->verticalHeader()->setVisible(false);
        userTableWidget->verticalHeader()->setMinimumSectionSize(30);
        userTableWidget->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(userTableWidget);

        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(500, 80, 241, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchBox = new QTextEdit(horizontalLayoutWidget);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy3);
        searchBox->setMinimumSize(QSize(180, 39));
        searchBox->setMaximumSize(QSize(180, 39));
        searchBox->setStyleSheet(QString::fromUtf8("QTextEdit { background-color: rgb(255, 255, 255,0);border-width: 2px; border-radius: 3px;border-color: #BEBEBE; border-style: inset; }"));

        horizontalLayout_2->addWidget(searchBox);

        searchButton = new QPushButton(horizontalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setMinimumSize(QSize(38, 38));
        searchButton->setMaximumSize(QSize(38, 38));
        searchButton->setFont(font);
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QPushButton:hover { background-color: rgb(50, 50, 50,255);}\n"
"\n"
""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon15);

        horizontalLayout_2->addWidget(searchButton);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Widget);

        sizeComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QQ", nullptr));
        sendButton->setText(QString());
        sizeComboBox->setItemText(0, QCoreApplication::translate("Widget", "9", nullptr));
        sizeComboBox->setItemText(1, QCoreApplication::translate("Widget", "10", nullptr));
        sizeComboBox->setItemText(2, QCoreApplication::translate("Widget", "11", nullptr));
        sizeComboBox->setItemText(3, QCoreApplication::translate("Widget", "12", nullptr));
        sizeComboBox->setItemText(4, QCoreApplication::translate("Widget", "13", nullptr));
        sizeComboBox->setItemText(5, QCoreApplication::translate("Widget", "14", nullptr));
        sizeComboBox->setItemText(6, QCoreApplication::translate("Widget", "15", nullptr));
        sizeComboBox->setItemText(7, QCoreApplication::translate("Widget", "16", nullptr));
        sizeComboBox->setItemText(8, QCoreApplication::translate("Widget", "17", nullptr));
        sizeComboBox->setItemText(9, QCoreApplication::translate("Widget", "18", nullptr));
        sizeComboBox->setItemText(10, QCoreApplication::translate("Widget", "19", nullptr));
        sizeComboBox->setItemText(11, QCoreApplication::translate("Widget", "20", nullptr));
        sizeComboBox->setItemText(12, QCoreApplication::translate("Widget", "21", nullptr));
        sizeComboBox->setItemText(13, QCoreApplication::translate("Widget", "22", nullptr));

#if QT_CONFIG(tooltip)
        boldToolButton->setToolTip(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        boldToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        italicToolButton->setToolTip(QCoreApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_CONFIG(tooltip)
        italicToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        underlineToolButton->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        underlineToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        colorToolButton->setToolTip(QCoreApplication::translate("Widget", "\346\233\264\346\224\271\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        colorToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        sendToolButton->setToolTip(QCoreApplication::translate("Widget", "\344\274\240\350\276\223\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        sendToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        saveToolButton->setToolTip(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        saveToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        clearToolButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        checkMessageButton->setToolTip(QCoreApplication::translate("Widget", "\346\237\245\347\234\213\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        checkMessageButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        toolButton_8->setText(QCoreApplication::translate("Widget", "...", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\266\205\344\272\272\347\253\237\345\234\250\346\210\221\350\272\253\350\276\271", nullptr));
        username->setText(QCoreApplication::translate("Widget", "QQQQQQQ", nullptr));
        userNumLabel->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", nullptr));
#if QT_CONFIG(tooltip)
        menuButton->setToolTip(QCoreApplication::translate("Widget", "\347\232\256\350\202\244", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        menuButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        menuButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        menuButton->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        menuButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        menuButton->setText(QString());
#if QT_CONFIG(tooltip)
        minButton->setToolTip(QCoreApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        minButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        maxButton->setToolTip(QCoreApplication::translate("Widget", "\346\234\200\345\244\247\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        maxButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QCoreApplication::translate("Widget", "...", nullptr));
        userListLabel->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "\344\270\273\346\234\272\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "IP\345\234\260\345\235\200", nullptr));
#if QT_CONFIG(tooltip)
        searchButton->setToolTip(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        searchButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
