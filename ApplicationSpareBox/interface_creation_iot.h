#ifndef INTERFACE_CREATION_IOT_H
#define INTERFACE_CREATION_IOT_H

#include <QMainWindow>
#include "acces_init.h"
#include "fonction_interface.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class interface_Creation_iot;
}

class interface_Creation_iot : public QMainWindow
{
    Q_OBJECT

public:
    explicit interface_Creation_iot(QWidget *parent = 0);
    ~interface_Creation_iot();

private slots:

    void on_pushButtonCreerIot_clicked();

    void on_comboBoxSiteEntreprise_activated(int index);

private:
    Ui::interface_Creation_iot *ui;
    QSqlDatabase database;

    fonction_interface fonctions;
    acces_init acces;

};

#endif // INTERFACE_CREATION_IOT_H
