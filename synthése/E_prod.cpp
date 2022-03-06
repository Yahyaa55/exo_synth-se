#include "E_prod.h"

E_prod::E_prod(string l_name, string f_name, string date, int ag, int nbr) {
	this->nom = l_name;
	this->prenom = f_name;
	this->date_entree = date;
	this->age = ag;
	this->nbr_unit = nbr;
	cout << "constructeur employe (prod) passee" << endl;
}

E_prod::~E_prod() {
	cout << "destructeur employe (prod) passee" << endl;
}

double E_prod::Calculer_salaire() {
	double salaire;
	salaire = this->nbr_unit * 5;
	return salaire;
}