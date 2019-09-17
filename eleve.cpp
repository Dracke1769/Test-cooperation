#include "eleve.h"

Eleve::Eleve(string sonNom, string sonPrenom, string saSection)
{
	nom=sonNom;
	prenom=sonPrenom;
	section=saSection;
}

void Eleve::afficheEleves()
{
	cout<<"Nom : "<<nom<<" Prenom : "<<prenom<<" Section "<<section<<endl;
}
