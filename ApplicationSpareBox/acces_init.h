#ifndef ACCES_INIT_H
#define ACCES_INIT_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>


class acces_init : public QMainWindow
{
    Q_OBJECT
public:
    explicit acces_init(QWidget *parent = nullptr);

    void initialisationBDD(QSqlDatabase database);



protected:


signals:
    void problemeConnexion();


public slots:
};

#endif // ACCES_INIT_H
