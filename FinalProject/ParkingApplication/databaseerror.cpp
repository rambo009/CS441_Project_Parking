#include "databaseerror.h"

DatabaseError::DatabaseError(QString errorMessage)
{
    m_errorMessage = errorMessage;
}


QString DatabaseError::getErrorMessage()
{
    return m_errorMessage;
}
