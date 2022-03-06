#pragma once
#include "Employe.h"
class E_vente : public Employe
{
	double chiff_aff;
public:
	E_vente(string = "", string = "", string = "", int = 0, double = 100);
	virtual ~E_vente();
	double Calculer_salaire() override;
};

