#include "include/mydb.h"

MyDB* MyDB::instance = nullptr;

MyDB::MyDB()
{
    init();
}
void MyDB::init()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QDir::currentPath() + "/../data/library.sqlite3";
    qDebug() << "📂 当前工作目录:" << QDir::currentPath();
    qDebug() << "📄 尝试打开数据库:" << dbPath;

    db.setDatabaseName(dbPath);

    if (db.open()) {
        qDebug() << "✅ 数据库连接成功";
    } else {
        qDebug() << "❌ 数据库连接失败:" << db.lastError().text();
    }
}



MyDB *MyDB::getInstance()
{
    qDebug() << "in MyDB::getInstance()";

    if(instance == nullptr)
        instance = new MyDB();

    return instance;
}

QSqlDatabase MyDB::getDBInstance()
{
    qDebug() <<"in getDBInstance()";
    return db;
}

void MyDB::ResetInstance()
{
      qDebug() << "deleting instance of MyDB";
      delete instance;
      instance = nullptr;
}

MyDB::~MyDB()
{
   qDebug() << "closing database connection";
   db.close();
}
