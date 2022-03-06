#include"Employe.h"
#include"E_vente.h"
#include"E_prod.h"
#include"E_manut.h"
#include"E_prod_manut.h"
#include"Personel.h"

int main() 
{
	Personel perso;
	E_vente emp_v;
	E_prod emp_p;
	E_manut emp_m;
	E_prod_manut emp_pm;
	perso.Ajouter_employe(&emp_v);
	perso.Ajouter_employe(&emp_p);
	perso.Ajouter_employe(&emp_m);
	perso.Ajouter_employe(&emp_pm);
	perso.Calculer_salaire();
	cout << "la moyenne des salaire est:\t" << perso.Salaire_moyen() << endl;
	return 0;
}