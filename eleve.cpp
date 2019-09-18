#include "eleve.h"
<<<<<<< HEAD

Eleve::Eleve(string sonNom, string sonPrenom, string saSection)
{
	nom=sonNom;
	prenom=sonPrenom;
	section=saSection;
=======
Eleve::Eleve(){
	cout<<"Veuillez rentrer le nom et le prenom de l'élève"<<endl<<endl;
	cout<<"Le nom ?"<<endl;
	string nom;
	getline(cin,nom);
	cout<<"Le prenom ?"<<endl;
	string prenom;
	getline(cin,prenom);
	nomEleve=nom;
	prenomEleve=prenom;
>>>>>>> 849eaeab38b499715648e887b64d6e64c5e11d30
}

void Eleve::afficheEleves()
{
	cout<<"Nom : "<<nom<<" Prenom : "<<prenom<<" Section "<<section<<endl;
}
