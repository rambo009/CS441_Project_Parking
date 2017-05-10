#ifndef DATABASEERROR_H
#define DATABASEERROR_H

#include <QString>

class DatabaseError
{
public:
    DatabaseError(QString errorMessage);

    QString getErrorMessage();

private:
    QString m_errorMessage;
};

#endif // DATABASEERROR_H
