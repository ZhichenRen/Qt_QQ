/********************************************************************************
** Form generated from reading UI file 'messages.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGES_H
#define UI_MESSAGES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Messages
{
public:
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *messageBrowser;
    QPushButton *okButton;

    void setupUi(QDialog *Messages)
    {
        if (Messages->objectName().isEmpty())
            Messages->setObjectName(QString::fromUtf8("Messages"));
        Messages->resize(400, 500);
        Messages->setStyleSheet(QString::fromUtf8("QDialog {border-radius: 15px;}"));
        verticalLayout_2 = new QVBoxLayout(Messages);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        messageBrowser = new QTextBrowser(Messages);
        messageBrowser->setObjectName(QString::fromUtf8("messageBrowser"));
        messageBrowser->setMinimumSize(QSize(370, 430));
        messageBrowser->setMaximumSize(QSize(370, 430));
        messageBrowser->setStyleSheet(QString::fromUtf8("QTextEdit { background-color: rgb(255, 255, 255,0);border-width: 2px; border-radius: 3px;border-color: #BEBEBE; border-style: inset; }"));

        verticalLayout_2->addWidget(messageBrowser);

        okButton = new QPushButton(Messages);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);
        okButton->setMinimumSize(QSize(30, 30));
        okButton->setMaximumSize(QSize(50, 50));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(50, 50, 50,0); border-radius: 3px; color: rgb(255, 255, 255); }\n"
"QPushButton:hover { background-color: rgb(50, 50, 50,255);}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon);
        okButton->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(okButton, 0, Qt::AlignHCenter);


        retranslateUi(Messages);

        QMetaObject::connectSlotsByName(Messages);
    } // setupUi

    void retranslateUi(QDialog *Messages)
    {
        Messages->setWindowTitle(QCoreApplication::translate("Messages", "Dialog", nullptr));
        okButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Messages: public Ui_Messages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGES_H
