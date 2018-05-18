#ifndef PROJETSPAREBOX_H
#define PROJETSPAREBOX_H

#include <QMainWindow>
#include "acces_init.h"
#include "fonction_interface.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QObject>



namespace Ui {
class projetSparebox;
}

class projetSparebox : public QMainWindow
{
    Q_OBJECT

public:
    explicit projetSparebox(QWidget *parent = 0);
    ~projetSparebox();

public slots:
    void on_pushButtonCreerResponsable_clicked();

private slots:



    void on_radioButtonTechnicien_clicked();

    void on_radioButtonResponsables_clicked();

    void on_Connexion();



private:
    Ui::projetSparebox *ui;
    int valniveau;
    QSqlDatabase database;

    acces_init acces;
    fonction_interface fonction;
};

#endif // PROJETSPAREBOX_H
