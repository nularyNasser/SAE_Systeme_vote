#include <iostream>
#include <vector>
#include <map>
#include <string>

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
        cout << i+1 << " : " << list[i] << endl;
    }
} // DisplayList()

// Fonction Voter
void Voter(vector <string> & listCandidats){
    // Faire en sorte qu'on ne puissent pas chosir 2 fois un Candidat
    int choix_candidat;
    for (unsigned i = 0; i < listCandidats.size()-1; i += 1){
        cout << "Choisir un chiffre entre " << 1 << " et " << listCandidats.size()-1 << " : ";
        cin >> choix_candidat;
    }
}

// Fonction Depouillement
// Fonction calcule de quota
// Fonction repartion des voix du premier gagnant

int main(){
    // Map vide au départ
    
    // Ajout des candidat dans un tableau de string et les afficher
    vector <string> listCandidats;
    InsertionCandidat(listCandidats);
    DisplayList(listCandidats);

    // Selection du nombre d'electeur
    int nbElecteur;
    cout << "Nombre d'electeur: ";
    cin >> nbElecteur;

    // Demander de voter
    Voter(listCandidats);
    
    return 0;
}