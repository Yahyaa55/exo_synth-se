#pragma once
#include <iostream>
#include <string>
#include "E_prod.h"
#include "E_manut.h"
using namespace std;

class E_prod_manut : public E_manut, public E_prod
{
	double prime_risque;
public:
	E_prod_manut(string = "", string = "", string = "", int = 0, int = 50, int = 24, double = 1500);
	virtual ~E_prod_manut();
	double Calculer_salaire() override;
};

