#include "gerer.h"

Gerer::Gerer()
{
	menu();
}

char Gerer::menu()
{
	cout<<"A : Ajouter une section "<<endl;
	cout<<"S : Supprimer une section "<<endl;
	cout<<"D : Afficher les section"<<endl;
	cout<<"M : Modifier une section"<<endl;
	char choix;
	cin>> choix;
	return choix;
}

void Gerer::modiferSection(){

}

void Gerer::afficherSection(){
	
}