#include "Employe.h"

Employe::Employe(string l_name, string f_name, string date, int ag) {
	this->nom = l_name;
	this->prenom = f_name;
	this->date_entree = date;
	this->age = ag;
	cout << "constructeur employe (abstract) passee" << endl;
}

Employe::~Employe() {
	cout << "destructeur employe (abstract) passee" << endl;
}

