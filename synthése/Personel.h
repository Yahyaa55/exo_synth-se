#pragma once
#include <iostream>
#include <vector>
#include "Employe.h"
using namespace std;

class Personel
{
	vector <Employe*> tab_E;
public:
	Personel();
	~Personel();
	void Ajouter_employe(Employe*);
	void Calculer_salaire() const;
	double Salaire_moyen();
};