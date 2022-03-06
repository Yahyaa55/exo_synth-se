#include "E_manut.h"

E_manut::E_manut(string l_name, string f_name, string date, int ag, int nbr) {
	this->nom = l_name;
	this->prenom = f_name;
	this->date_entree = date;
	this->age = ag;
	this->nbr_heur = nbr;
	cout << "constructeur employe (manut) passee" << endl;
}

E_manut::~E_manut() {
	cout << "destructeur employe (manut) passee" << endl;
}

double E_manut::Calculer_salaire() {
	double salaire;
	salaire = this->nbr_heur * 100;
	return salaire;
}