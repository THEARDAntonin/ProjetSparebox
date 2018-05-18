#include "interface_creation_iot.h"
#include "ui_interface_creation_iot.h"

interface_Creation_iot::interface_Creation_iot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interface_Creation_iot)
{
    ui->setupUi(this);

    // Initialisation
        acces.initialisationBDD(database);
    //
// //////////
    QSqlQuery requeteEntreprise;
    QString entreprise;

    if(requeteEntreprise.exec("SELECT `id_site`,`adresse` FROM `site`"))
           {
               while(requeteEntreprise.next())
               {
                   entreprise = requeteEntreprise.value("adresse").toString();
                   ui->comboBoxSiteEntreprise->addItem(entreprise,requeteEntreprise.value("id_site").toInt());
                   qDebug() << entreprise;
               }
           }
           else
           {
               qDebug() << "probleme requete";
               QMessageBox::information(this,"PROBLEME Requete","Erreur ComboBox");
           }
// //////////

}

interface_Creation_iot::~interface_Creation_iot()
{
    delete ui;
}



void interface_Creation_iot::on_pushButtonCreerIot_clicked()
{

    fonctions.Creeriot(ui->lineEditIot->text(),ui->comboBoxSiteEntreprise->currentData());

}

void interface_Creation_iot::on_comboBoxSiteEntreprise_activated(int index)
{
    // affichage clef primaire lie au texte selectionne
    qDebug()<<ui->comboBoxSiteEntreprise->itemData(index).toInt();
}
