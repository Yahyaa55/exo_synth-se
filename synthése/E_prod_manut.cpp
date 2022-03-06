#include "E_prod_manut.h"

E_prod_manut::E_prod_manut(string l_name, string f_name, string date, int ag, int nbr_u, int nbr_h,double prime) {
	this->nom = l_name;
	this->prenom = f_name;
	this->date_entree = date;
	this->age = ag;
	this->nbr_unit = nbr_u;
	this->nbr_heur = nbr_h;
	this->prime_risque = prime;
	cout << "constructeur employe (prod_manut) passee" << endl;
}

E_prod_manut::~E_prod_manut() {
	cout << "destructeur employe (prod_manut) passee" << endl;
}

double E_prod_manut::Calculer_salaire() {
	double salaire = this->prime_risque;
	salaire = salaire + (this->nbr_heur * 100);
	salaire = salaire + (this->nbr_unit * 5);
	return salaire;
}