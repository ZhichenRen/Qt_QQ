#ifndef MESSAGES_H
#define MESSAGES_H

#include <QDialog>

namespace Ui {
class Messages;
}

class Messages : public QDialog
{
    Q_OBJECT

public:
    explicit Messages(QList<QString> messages, QWidget *parent = nullptr);
    ~Messages();

private:
    Ui::Messages *ui;
    QList<QString> msgs;
    QString user;

private slots:
    void exit();
};

#endif // MESSAGES_H
