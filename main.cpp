#include <iostream>

using namespace std;

int main() {
     int nbEnfants(-1); // Nombre négatif pour pouvoir entrer dans la boucle

while (nbEnfants < 0)
       {
     cout << "Combien d'enfants avez-vous ?" << endl;
      cin >> nbEnfants;
      }
cout << "Merci d'avoir indique un nombre d'enfants correct. Vous en avez " << nbEnfants << endl;

    return 0;
}

