#include "dbmanager.h"

DBManager::DBManager()
{
    //(void) user;        // http://stackoverflow.com/questions/1486904/how-do-i-best-silence-a-warning-about-unused-variables
    //(void) passwd;
    //UNUSED(user1);
    //UNUSED(passwd1);

    mkCONFIG;
    const QString &connectionName   = "db_" + QApplication::applicationName();
//    const QString &driver           = confg->value("DB/DRIVER").toString();  //"QMYSQL"
//    const QString &dbname           = confg->value("DB/NAME").toString();    //"Queue"
//    const QString &hostname         = confg->value("DB/SRV").toString();     //"192.168.1.41"
//    const QString &user             = confg->value("DB/USER").toString();    //"QueueUser"
//    const QString &passwd           = confg->value("DB/PWD").toString();     //"QueueUserOnly"
    const QString &driver           = confg->string( KEY2("driver") );
    const QString &dbname           = confg->string( KEY2("dbname") );
    const QString &hostname         = confg->string( KEY2("server") );
    const QString &user             = confg->string( KEY2("username") );
    const QString &passwd           = confg->string( KEY2("password") );

    SQLDRV sqlDrv = SQLDRV::NODRV;

    if( driver == "QSQLITE" )       sqlDrv = SQLDRV::QSQLITE;
    if( driver == "QMYSQL" )        sqlDrv = SQLDRV::QMYSQL;
    if( sqlDrv == SQLDRV::NODRV )   return;

    // https://forum.qt.io/topic/15962/solved-qsqldatabaseprivate-removedatabase-connection-is-still-in-use-all-queries-will-cease-to-work
    // QSqlDatabase* db = new QSqlDatabase(QSqlDatabase::addDatabase("QODBC"));
    // db->setDatabaseName("DRIVER={SQL SERVER}; SERVER={" + QHostInfo::localHostName() + "}");
    //m_db = new QSqlDatabase( QSqlDatabase::addDatabase("QSQLITE", connectionName) );

    //qDebug() << connectionName;

    //    const QString &name = hostname;
    //   m_db->setDatabaseName(name);

    //    m_db = QSqlDatabase::addDatabase(DRIVER[sqlDrv] );

    const QString &drv = DRIVER[sqlDrv];
    m_db = QSqlDatabase::addDatabase( drv, connectionName);
    QString myDbName;

    switch (sqlDrv) {

    case SQLDRV::QSQLITE:
        myDbName = "Extra" + QString(QDir::separator()) + dbname + ".db";
        break;

    case SQLDRV::QMYSQL:
        myDbName = dbname;
        break;

    default:
        break;
    }

    m_db.setHostName(hostname);
    m_db.setUserName(user);
    m_db.setPassword(passwd);
    m_db.setDatabaseName(myDbName);

    if( !m_db.open() ) {
        //qDebug() << "Error: connection with database fail" ;
    } else {
        //qDebug() << "Database: connection ok";
    }

    //qDebug() << m_db.lastError().text();

}

DBManager::~DBManager()
{
}

QString DBManager::getText(const QString &column, const QString &table, const QString &where)
{
    QString value = "";
    QSqlQuery query(m_db);

    const QString &sql = " SELECT " + column + " FROM " + table + " WHERE " + where + " ";

    //query.prepare( " SELECT :column FROM :table WHERE MAC_ADDRESS=:macAddress " );
    query.prepare( sql );
    //query.bindValue( ":column", column );
    //query.bindValue( ":table", "ListedNode" );
    //query.bindValue( ":where", where );

    query.exec(sql);
    if( query.next() )
    {
        value = query.value(column).toString();
    } else {
        value = "";
    }
    //qDebug() << sql;
    return value;
}

QString DBManager::getText(const QString &sql, const QString &returnedColumn)
{
    QString text = "";
    QSqlQuery query(m_db);

    //query.prepare( " SELECT :column FROM :table WHERE MAC_ADDRESS=:macAddress " );
    query.prepare( sql );
    //query.bindValue( ":column", column );
    //query.bindValue( ":table", "ListedNode" );
    //query.bindValue( ":where", where );

    query.exec();
    if( query.next() )
    {
        text = query.value(returnedColumn).toString();
    } else {
        text = "";
    }

    //qDebug() << sql;

    return text;
}

// return first record only !!
MyMap DBManager::getRecord1(const QString &sql)
{
    QMap<QString, QVariant> myRcd;

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(sql, m_db);

    QSqlRecord sqlRcd = model->record(0);

    if( model->rowCount() > 0 ) {
        for( int i=0; i<sqlRcd.count(); i++  ) {
            QString colName = sqlRcd.fieldName(i);
            QString colValue = sqlRcd.value(i).toString();
            myRcd[colName] = colValue;
        }
    }

    return myRcd;
}

MyVector DBManager::getRecord2(const QString &sql)
{
    (void) sql;
    MyVector rcd;
    return rcd;
}

QJsonObject DBManager::getRecord3(const QString &sql)
{
    QJsonObject myRcd;
    QJsonObject myFld;

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(sql, m_db);

    for(int i=0; i<model->rowCount(); i++)
    {
        QSqlRecord sqlRcd = model->record(i);
        for( int i=0; i<sqlRcd.count(); i++  ) {
            QString fldName = sqlRcd.fieldName(i);
            QString fldValue = sqlRcd.value(i).toString();
            myFld[fldName] = fldValue;
        }
        myRcd[ QString::number(i) ] = myFld;
    }

    return myRcd;
}

void DBManager::updateRecord(const QString &sql)
{
    m_db.exec(sql);
}

void DBManager::TestDB()
{
    qDebug() << __PRETTY_FUNCTION__;
}

bool DBManager::isConnected()
{
    const QString &str = getText("COUNT(rowidx)", "PrintedQueue", "1");
    const int &qty = str.toInt();
    return qty>0 ? true : false;
}

const QString DBManager::getTaxonomy(const QString &id, const uint8_t &code)
{
    //const QString &sql = QString( " SELECT * FROM Taxonomy WHERE id='%1' AND code=%2 " ).arg(id).arg(code);
    const QString &where = QString( " id='%1' AND code=%2 " ).arg(id).arg(code);
    const QString &text = getText( "description", "Taxonomy", where );
    return text;
}
