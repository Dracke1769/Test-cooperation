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
}

void Eleve::afficheNomEleves()
{
	cout<<"Nom : "<<nomEleve<<" Prenom : "<<prenomEleve<<endl;
}
