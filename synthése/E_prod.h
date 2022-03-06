#pragma once
#include <iostream>
#include <string>
#include "Employe.h"
using namespace std;
 
class E_prod : virtual public Employe
{
protected:
	int nbr_unit;
public:
	E_prod(string = "", string = "", string = "", int = 0, int = 50);
	virtual ~E_prod();
	double Calculer_salaire() override;
};

