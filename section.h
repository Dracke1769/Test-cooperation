#include "eleve.h"
#include <vector>

class Section{
        private:
                string sectionLib;
                vector<Eleve>vectorEleves;
        public: 
                Section();
                void ajoutEleve(Eleve unEleve);



};