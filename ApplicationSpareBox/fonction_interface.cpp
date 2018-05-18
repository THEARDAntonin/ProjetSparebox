#include "fonction_interface.h"
/**
 * @brief fonction_interface::fonction_interface
 * @param parent
 */



fonction_interface::fonction_interface(QWidget *parent) : QMainWindow(parent)
{

}

/**
 * @brief fonction_interface::CreerUtilisateurs
 * @param prenom
 * @param nom
 * @param mail
 * @param numtelephone
 * @param mdp
 * @param valniveau
 * Fonction permettant la création des utilisateurs dans la base de données
 */
void fonction_interface::CreerUtilisateurs(QString prenom, QString nom, QString mail, QString numtelephone, QString mdp, int valniveau)
{
    QSqlQuery requete;

     QString prepRequeteUtilisateur = "INSERT INTO `sparebx`.`utilisateur`(`prenom`,`nom`,`adressemail`,`numtelephone`,`niveau`,`motdepasse`)"
                           "VALUES(:prenom,:nom,:adressemail,:numtelephone,:niveau,:motdepasse);";

     requete.prepare(prepRequeteUtilisateur);
     requete.bindValue(":prenom",prenom);
     requete.bindValue(":nom",nom);
     requete.bindValue(":adressemail",mail);
     requete.bindValue(":numtelephone",numtelephone);
     requete.bindValue(":niveau",valniveau);
     requete.bindValue(":motdepasse",mdp);

     if(requete.exec())
     {
         qDebug() << "Requete executée";
         QMessageBox::information(this,"Requete EXECUTÉE","Utilisateur créer");
     }
     else
     {
         qDebug() << "probleme requete";
         QMessageBox::information(this,"PROBLEME connexion ","Vous avez un problème ");
     }

}




/**
 * @brief fonction_interface::Creeriot
 * @param deveui
 * @param idSites
 * Permet de créer les iot dans la base de données avec pour données deveui et le site auquel l'iot est associer
 */
void fonction_interface::Creeriot(QString deveui, QVariant idSites)
{
    QSqlQuery requete;
      QString prepRequeteUtilisateur = "INSERT INTO `sparebox`.`iot`(`deveui`,`id_sites`)"
                            "VALUES(:deveui,:id_sites);";


      requete.prepare(prepRequeteUtilisateur);
      requete.bindValue(":deveui",deveui);
      requete.bindValue(":id_sites",idSites);


      if(requete.exec())
      {
          qDebug() << "Requete executée";
          QMessageBox::information(this,"Requete EXECUTÉE","iot créer");
      }
      else
      {
          qDebug() << "probleme requete";
          QMessageBox::information(this,"PROBLEME Requete","Vous avez un problème");
      }
}














