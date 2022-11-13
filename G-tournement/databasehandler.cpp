#include "databasehandler.h"

DataBaseHandler::DataBaseHandler(QObject *parent)
    : QObject{parent}
{
    this->m_networkManager = new QNetworkAccessManager(this);

    this->m_networkReply = this->m_networkManager->get(QNetworkRequest(QUrl("https://goulttournement-default-rtdb.firebaseio.com/gameList.json")));
    connect(this->m_networkReply, &QNetworkReply::readyRead, this, &DataBaseHandler::networkReplyReadyRead);
}

DataBaseHandler::~DataBaseHandler()
{
    this->m_networkManager->deleteLater();
}

void DataBaseHandler::networkReplyReadyRead()
{
    qDebug() << this->m_networkReply->readAll();
}
