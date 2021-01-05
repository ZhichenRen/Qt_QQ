#include "messages.h"
#include "ui_messages.h"

Messages::Messages(QString user, QList<QString> messages, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Messages),
    msgs(messages),
    user(user)
{
    ui->setupUi(this);
    for(int i=0;i<msgs.length();i++)
    {
        ui->messageBrowser->append("[" + user + "] " + msgs[i]);
    }
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(exit()));
}

void Messages::exit()
{
    this->accept();
}

Messages::~Messages()
{
    delete ui;
}
