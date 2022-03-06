#include "Personel.h"

Personel::Personel()
{
	this->tab_E = vector<Employe*>();
}

Personel::~Personel()
{
	this->tab_E.clear();
}

void Personel::Ajouter_employe(Employe* ptr)
{
	this->tab_E.push_back(ptr);
}

void Personel::Calculer_salaire() const
{
	double salaire = 0;
	for (int i = 0; i < this->tab_E.size(); i++)
	{
		salaire = this->tab_E[i]->Calculer_salaire();
		cout << "le salaire est:\t" << salaire << endl;
	}
}

double Personel::Salaire_moyen()
{
	double somme = 0;
	int i = 0;
	for (i = 0; i < this->tab_E.size(); i++)
	{
		somme = somme + this->tab_E[i]->Calculer_salaire();
	}
	return somme/i;
}

