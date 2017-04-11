#ifndef PARKINGTYPE_H
#define PARKINGTYPE_H

#include <QString>

class ParkingType
{
public:
    ParkingType();

    QString getQueryString(QString terminalName);

protected:
    virtual void initialize() = 0;
    QString m_parkingType;

private:
    QString m_terminalName;
};

#endif // PARKINGTYPE_H
