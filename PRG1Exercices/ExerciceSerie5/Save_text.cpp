//
// Created by Helpdesk on 04.11.2024.
//

#include <iostream>
#include <fstream>
#include <string>
#include "main.h"
using namespace std;




void SaveFileTxt() {

   bool restart = true;
   string fileName;
   do {
      char res;
      ofstream file;
      cout << "Saisir le nom du fichier :";
      std::getline(std::cin, fileName);
      cout << "Saisir le contenu du fichier et #end# ou ctrl+D pour quitter" << endl;
      SaveFile(fileName);

      do {
         cout << "recommencer ? [o/n]";
         cin >> res;
         if (tolower(res) == N) {
            restart = false;
         }
      } while (res != O and res != N);
   } while (restart);
}
void SaveFile(const string &filename) {
   ofstream file;
   file.open(filename, ios::app);
   string file_content;
   const string exitfile = "#end#";
   if (!file) {
      cerr << "Erreur d'ouverture de fichier" << endl;
      _Exit(1);
   }
   while ( getline (cin,file_content ) ) {
      if ( file_content != exitfile ) {
         file << file_content << "\n";
      } else break;
   }

   file.close();
}
