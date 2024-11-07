//
// Created by Helpdesk on 17.10.2024.
//

#include "main.h"
#include <iostream>
using namespace std;

int main () {
   bool restart = true;
   do {
      unsigned short int choice;
      cout  << "Choose one of exercixces : "          << endl
            << "1. Save Txt files"                    << endl
            << "2. lecture et ajout dans un fichier"  << endl
            << "3. redirection cin"                   << endl
            << "4. formattage divers"                 << endl
            << "5. formattage infos etudiants"        << endl
            << "6. controle de saisie infos etudiants"<< endl
            << "7. buffer de lecture"                 << endl
            << "8. Exit"                              << endl;
      cin >> choice;
      switch (choice) {
         case 1: SaveFileTxt();
                  break;
         case 2: LoadAndWriteFileTxt();
                  break;
         case 3: RedirectCin();
                  break;
         case 4: FormatageDivers();
                  break;
         case 5: FormatageInfo();
                  break;
         case 6: InputControl();
                  break;
         case 7: BufferRead();
                  break;
         default: restart = false;
      }
   } while (restart);
   return EXIT_SUCCESS;
}
