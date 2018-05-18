#include "projetSparebox.h"
#include "ui_projetsparebox.h"



/**
 * @brief projetSparebox::projetSparebox
 * @param parent
 * initialise la connection avec la base de données
 *
 */
projetSparebox::projetSparebox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::projetSparebox)
{
    ui->setupUi(this);
    // Initialisation
    acces.initialisationBDD(database);
    //
    //Autorise que des chiffres dans le lineEdit_NumTel
    QIntValidator *validator = new QIntValidator(0);
    ui->lineEdit_NumTel->setValidator(validator);


    // Défaut de connexion
    if(!connect(&acces, SIGNAL(problemeConnexion()), this, SLOT(on_Connexion()))) {

        qDebug() << "Erreur à la connexion.";
    }
    else {
        ui->lineEdit_Mail->setReadOnly(false);
        ui->lineEdit_mdp->setReadOnly(false);
        ui->lineEdit_Nom->setReadOnly(false);
        ui->lineEdit_NumTel->setReadOnly(false);
        ui->lineEdit_Prenom->setReadOnly(false);

        ui->pushButtonCreerResponsable->setEnabled(true);
    }
}

projetSparebox::~projetSparebox()
{
    delete ui;
}

/**
 * @brief projetSparebox::on_pushButtonCreerResponsable_clicked
 * Permet de créer les utilisateur dans la base de données
 *
 */
void projetSparebox::on_pushButtonCreerResponsable_clicked()
{

    fonction.CreerUtilisateurs(ui->lineEdit_Prenom->text(),ui->lineEdit_Nom->text(),ui->lineEdit_Mail->text(),ui->lineEdit_NumTel->text(),ui->lineEdit_mdp->text(),valniveau);

}


void projetSparebox::on_radioButtonTechnicien_clicked()
{
    //prend la valeur 1 pour Technicien
    valniveau=1;
}

void projetSparebox::on_radioButtonResponsables_clicked()
{
    //prend la valeur 2 pour Responsables
    valniveau=2;
}

void projetSparebox::on_Connexion()
{

}
