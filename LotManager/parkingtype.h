#ifndef PARKINGTYPE_H
#define PARKINGTYPE_H

#include <QString>

class ParkingType
{
public:
    ParkingType();

    void setLotName(QString lotName);
    QString getQueryString();
    QString getQueryStringNew();

protected:
    virtual void initialize() = 0;
    QString m_parkingType;

private:
    QString m_lotName;
};

#endif // PARKINGTYPE_H
