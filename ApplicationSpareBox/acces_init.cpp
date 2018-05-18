#include "acces_init.h"

acces_init::acces_init(QWidget *parent) : QMainWindow(parent)
{

}
/**
 * @brief acces_init::initialisationBDD
 * @param database
 * initialise la connection avec la base de données
 */
void acces_init::initialisationBDD(QSqlDatabase database)
{
    //initialisation

        database = QSqlDatabase::addDatabase("QMYSQL");
        database.setHostName("172.18.58.33");     // l'adresse IP du serveur mySQL
        database.setUserName("root");           // le nom de l'utilisateur
        database.setPassword("Touchard72");          // le mot de passe de l'utilisateur
        database.setDatabaseName("sparebox");      // le nom de la base


        if(database.open())
        {
            qDebug() << ".connecter.";
        }
        else
        {
            qDebug() << "pb de connexion";
            QMessageBox::information(this,"ERREUR","Pas de connexion");
           emit problemeConnexion();
        }
}













