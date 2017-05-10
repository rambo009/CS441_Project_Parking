#ifndef DATABASEINITIALIZATIONFILEREADER_H
#define DATABASEINITIALIZATIONFILEREADER_H

#include <QString>

#include <vector>
using namespace std;

class DatabaseInitializationFileReader
{
public:
    DatabaseInitializationFileReader(QString filename);

    QString getTerminalName();
    QString getHostName();
    QString getPortNumber();
    QString getDatabaseName();
    QString getPassword();

    bool isOpen();

private:
    enum INITIALIZATED_DATA {
        TERMINAL_NAME,
        HOST_NAME,
        PORT_NUMBER,
        DATABASE_NAME,
        PASSWORD,
        SIZE
    };

    QString m_initializedData[INITIALIZATED_DATA::SIZE];

    bool m_isOpen;
};

#endif // DATABASEINITIALIZATIONFILEREADER_H
