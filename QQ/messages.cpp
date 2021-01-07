#include "messages.h"
#include "ui_messages.h"

Messages::Messages(QList<QString> messages, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Messages),
    msgs(messages)
{
    ui->setupUi(this);
    for(int i=0;i<msgs.length();i++)
    {
        ui->messageBrowser->append(msgs[i]);
    }
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(exit()));
    this->setStyleSheet("background-image: ;QDialog {border-top-left-radius:15px;border-top-right-radius:5px;}");
}

void Messages::exit()
{
    this->accept();
}

Messages::~Messages()
{
    delete ui;
}
