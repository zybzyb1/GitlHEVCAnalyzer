#ifndef DECODERGENERALPARSER_H
#define DECODERGENERALPARSER_H

#include <QObject>
#include <QTextStream>
#include "model/common/comsequence.h"

class DecoderGeneralParser : public QObject
{
    Q_OBJECT
public:
    explicit DecoderGeneralParser(QObject *parent = 0);
    bool parseFile(QTextStream* pcInputStream, ComSequence* pcSequence);

protected:
    void xSortByFrameCount( ComSequence* pcSequence );

signals:

public slots:

};

#endif // DECODERGENERALPARSER_H
