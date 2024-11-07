//
// Created by Helpdesk on 04.11.2024.
//

#include <iostream>
#include <fstream>
#include "main.h"
using namespace std;


void SaveFile(const string &file,const string &file_content);

void SaveFileTxt() {
   bool restart = true;
   string ligne;
   do {
      system("cls");
      char res;
      string fileName;
      ofstream file;

      cout << "Saisir le nom du fichier :";
      getline(cin, fileName);
      cout << "Saisir le contenu du fichier"<<endl;
      getline (cin, ligne);

      SaveFile(fileName,ligne );

      do {
         cout << "recommencer ? [o/n]";
         cin >> res;
         if (tolower(res) == 'n') {
            restart = false;
         }
      }while (res != 'o' and res != 'n' );

   }while(restart);
}

void MakeFile(const string &filename) {

}

void SaveFile(const string &filename,const string &file_content){
   ofstream file;
   file.open(filename, ios::app);
   if (!file) {
      cerr << "Erreur d'ouverture de fichier"<<endl;
      _Exit(1);
   }
   file << file_content<<"\n";
   file.close();
}