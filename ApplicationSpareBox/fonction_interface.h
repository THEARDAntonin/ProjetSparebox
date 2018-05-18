#ifndef FONCTION_INTERFACE_H
#define FONCTION_INTERFACE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>

class fonction_interface : public QMainWindow
{
    Q_OBJECT
public:
    explicit fonction_interface(QWidget *parent = nullptr);

    void CreerUtilisateurs(QString prenom, QString nom, QString mail, QString numtelephone, QString mdp, int valniveau);
    void Creeriot(QString deveui, QVariant idSites);
    //void afficherSiteEntreprise(QString siteEntreprise);

signals:

public slots:
};

#endif // FONCTION_INTERFACE_H
