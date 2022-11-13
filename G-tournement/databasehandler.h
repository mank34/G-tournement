#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QDebug>

class DataBaseHandler : public QObject
{
    Q_OBJECT
public:
    explicit DataBaseHandler(QObject *parent = nullptr);
    ~DataBaseHandler();

public slots:
    void networkReplyReadyRead();

signals:

private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply         *m_networkReply;


};

#endif // DATABASEHANDLER_H
