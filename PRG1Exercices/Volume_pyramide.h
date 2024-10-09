/* -----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Kiala binga Christnovie
Date creation  : 08.10.2024
Description    : programme calcule le volume d'un pyramide
Remarque(s)    : version 1.0.0
Compilateur    : Mingw-w64 g++ 11.1.0  -----------------------------------------------------------------------------------
*/
#ifndef VOLUME_PYRAMIDE_H
#define VOLUME_PYRAMIDE_H
#endif //VOLUME_PYRAMIDE_H

using namespace std;


inline double Volume(const double &hauteur,
                     const double &largeur,
                     const double &longuer) {
   return hauteur * largeur * longuer / 3.0;
}

inline int mainp() {

   bool restart;
   do {
      double hauteur, largeur, longuer;
      cout << "Volume calculator"                                 << endl
           << "*****************"                                 << endl
           << "Ce programme calcule le volume "
           << "d'une pyramide a base rectangulaire"               << endl
           << "Entrez les valeurs du pyramide dans cette ordre :" << endl
           << "1. hauteur, 2. largeur, 3. longuer"                << endl;
      cin  >> hauteur
           >> largeur
           >> longuer;
      cout << "Le volume du pyramide est :"
           << setprecision(2) <<Volume(hauteur, largeur, longuer)<< endl
           << "Voulez-vous recommencer [N/0]:";
   } while(cin >> restart);
   return EXIT_SUCCESS;
}

