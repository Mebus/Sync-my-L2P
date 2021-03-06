#ifndef UTILS_H
#define UTILS_H

#include <QObject>
#include <QClipboard>
#include <QMessageBox>
#include "structureelement.h"

class Utils : public QObject
{
    Q_OBJECT
public:
    explicit Utils(QObject *parent = 0);
    static QString getStrukturelementPfad(Structureelement* item, QString path);
    static void copyTextToClipboard(Structureelement *item);
    static void errorMessageBox(QString message, QString detailMessage);
signals:
    
public slots:

};

#endif // UTILS_H
