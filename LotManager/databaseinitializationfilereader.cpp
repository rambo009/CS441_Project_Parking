#include "databaseinitializationfilereader.h"

#include <QFile>
#include <QTextStream>

DatabaseInitializationFileReader::DatabaseInitializationFileReader(QString filename)
{
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        m_isOpen = false;
        return;
    }

    QTextStream inFileStream(&file);

    for(int i = 0; i < INITIALIZATED_DATA::SIZE; i++) {

        if(inFileStream.atEnd()) {
            m_isOpen = false;
            return;
        }

        m_initializedData[i] = inFileStream.readLine();
    }

    file.close();

    m_isOpen = true;
}


QString DatabaseInitializationFileReader::getTerminalName() {
    return m_initializedData[TERMINAL_NAME];
}

QString DatabaseInitializationFileReader::DatabaseInitializationFileReader::getHostName() {
    return m_initializedData[HOST_NAME];
}

QString DatabaseInitializationFileReader::getPortNumber() {
    return m_initializedData[PORT_NUMBER];
}

QString DatabaseInitializationFileReader::getDatabaseName() {
    return m_initializedData[DATABASE_NAME];
}

QString DatabaseInitializationFileReader::getPassword() {
    return m_initializedData[PASSWORD];
}

bool DatabaseInitializationFileReader::isOpen() {
    return m_isOpen;
}
