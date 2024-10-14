#include <iostream>
#include <vector>
#include <map>

using namespace std;

void InsertionCandidat(vector <string> & listCandidat){
    string candidatName;
    int cptCandidat = 1;
    cout << "Tapez 'q' pour arrêter" << endl;
    while (candidatName != "q"){
        cout << "Nom du candidat numero " << cptCandidat << " : ";
        cin >> candidatName;
        listCandidat.push_back(candidatName);
        cptCandidat += 1;
    }
} // InsertionCandidat(listCandidat)

void DisplayList(vector <string> & list){
    for (unsigned i = 0; i < list.size()-1; i += 1){ // Affichage de la liste des candidats
        cout << list[i] << endl;
    }
} // DisplayList()

// Fonction Classemnt
void Classement(vector <string> listCandidats){
    map<string, int> classement;
    
}
// Fonction Depouillement
// Fonction calcule de quota
// Fonction repartion des voix du premier gagnant

int main(){
    // Ajout des candidat dans un tableau de string
    vector <string> listCandidats;
    InsertionCandidat(listCandidats);
    DisplayList(listCandidats);

    // Selection du nombre d'electeur
    int nbElecteur;
    cout << "Nombre d'electeur: ";
    cin >> nbElecteur;

    
    return 0;
}