// Context: On a un nombre de candidat N et il y'a 4 chaises disponible.
// Le but est que seulement 4 parmi les N soient élus.
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Liste des électeur

    vector <string> candidat;
    candidat.push_back("G1");
    candidat.push_back("G2");
    candidat.push_back("G3");
    candidat.push_back("G4");

    // Nombre d'électeur

    unsigned nbElecteur;
    cout << "Combient d'électeur: ";
    cin >> nbElecteur;
    cout << endl;

    // Demande de classement
    unsigned choiCandidat;
    for (unsigned i = 1; i <= nbElecteur; i += 1){
        cout << "----------------------------------" << endl;
        cout << "Votant numéro " << i << endl;
        vector <string> copyCandidat = candidat;
        unsigned candidatRestant = copyCandidat.size();
        cout << copyCandidat.size() << endl;
        for (unsigned j = 0; j < candidatRestant; j += 1){

            for (unsigned k = 0; k < candidatRestant; k += 1){
                if (k < candidatRestant-1){
                    cout << k+1 << " : " << copyCandidat[k] << " / ";
                }else{
                    cout << k+1 << " : " << copyCandidat[k];
                }
            }
            cout << endl;
            cout << "Choisir le numero du candidat: ";
            cin >> choiCandidat;
            choiCandidat -= 1;

            copyCandidat.erase(copyCandidat.begin()+choiCandidat);
            candidatRestant = copyCandidat.size();
            cout << endl;
        }
    }

    return 0;
}