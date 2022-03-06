#include "E_vente.h"


E_vente::E_vente(string l_name, string f_name, string date, int ag, double c_a) {
	this->nom = l_name;
	this->prenom = f_name;
	this->date_entree = date;
	this->age = ag;
	this->chiff_aff = c_a;
	cout << "constructeur employe (vente) passee" << endl;
}

E_vente::~E_vente() {
	cout << "destructeur employe (vente) passee" << endl;
}

double E_vente::Calculer_salaire() {
	double salaire;
	salaire = (this->chiff_aff * 20 / 100) + this->chiff_aff;
	if (salaire < 4000)
		salaire = 4000;
	return salaire;
}