//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "qtdb_global.h"
#include <QVariant>
#include "../QtConfig/def.h"
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QVector>
#include <QJsonObject>
#include <QDir>
//#include "../QtConfig/dsettings.h"
#include "globals.h"
#include <QSqlError>
#include <QMetaObject>
#include <QStringList>

#define DRIVER_             m_config->value("DB/DRIVER").toString()  //"QMYSQL"
#define DBNAME_             m_config->value("DB/NAME").toString()    //"Queue"
#define DBSRV_              m_config->value("DB/SRV").toString()     //"192.168.1.41"
#define DBUSER_             m_config->value("DB/USER").toString()    //"QueueUser"
#define DBPWD_              m_config->value("DB/PWD").toString()     //"QueueUserOnly"

#define M_DB                DB* m_db
#define mkDB                m_db = new DB()

// QSQLITE QMYSQL QMYSQL3 QPSQL QPSQL7
enum    SQLDRV              {  NODRV,   QSQLITE,   QMYSQL,   QMYSQL3,   QPSQL,   QPSQL7 };
const   QStringList DRIVER  { "NODRV", "QSQLITE", "QMYSQL", "QMYSQL3", "QPSQL", "QPSQL7" };

typedef QMap<QString, QVariant>     MyMap;
typedef QVector<MyMap>              MyVector;

class QTDBSHARED_EXPORT DBManager : public QObject
{
    Q_OBJECT
public:
    //DBManager(const QString &connectionName1, const QString &driver1, const QString &dbname1, const QString &hostname1="", const QString &user1="", const QString &passwd1="");
    DBManager();
    ~DBManager();

private:
    QSqlDatabase m_db;

public:
    // get string value by column and where
    QString getText(const QString &column, const QString &table, const QString &where);
    // get string value by sql
    QString getText(const QString &sql, const QString &returnedColumn);
    MyMap getRecord1(const QString &sql);
    MyVector getRecord2(const QString &sql);
    QJsonObject getRecord3(const QString &sql);
    QList<QStringList*> getRecord5(const QString &sql);

    // update record
    void updateRecord(const QString &sql);

    void TestDB();
    bool isConnected();
    const QString getTaxonomy( const QString &id, const uint8_t &code=0 );



};

#endif // DBMANAGER_H
