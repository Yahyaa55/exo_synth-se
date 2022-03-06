#pragma once
#include <iostream>
#include <string>
#include "Employe.h"
using namespace std;

class E_manut : virtual public Employe
{
protected:
	int nbr_heur;
public:
	E_manut(string = "", string = "", string = "", int = 0, int = 24);
	virtual ~E_manut();
	double Calculer_salaire() override;
};

