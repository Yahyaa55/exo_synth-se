#pragma once
#include<iostream>
#include <string>
using namespace std;

class Employe
{
protected:
	string nom, prenom, date_entree;
	int age;
public:
	Employe(string = "", string = "",string = "",int = 0);
	virtual ~Employe();
	virtual double Calculer_salaire() = 0;
};

