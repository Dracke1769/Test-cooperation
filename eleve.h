#include <iostream>
using namespace std;

class Eleve{
	private:
		string nom;
		string prenom;

	public:
		Eleve(string sonNom, string sonPrenom);
		void afficheEleves();
		void ajoutEleve();
};
