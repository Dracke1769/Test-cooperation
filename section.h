#include "eleve.h"
#include <vector>

class Section{
        private:
                string sectionLib;
                vector<Eleve>vectorEleves;
        public: 
                Section();
                void ajoutEleve(Eleve unEleve);
                void affichageEleves();
                void affichageSection();
                void descriptionSection();
		void modifierEleve(Eleve unEleve);
		void supprimerEleve(Eleve unEleve);



};
