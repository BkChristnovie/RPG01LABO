//
// Created by Helpdesk on 04.11.2024.
//
#include <iostream>
#include <fstream>
#include "main.h"
using namespace std;

void LoadAndWriteFileTxt() {
   bool restart = true;
   string fileName;
   do {
      char res;
      cout << "Saisir le nom du fichier de sortie :";
      std::getline(std::cin, fileName);

      if (Is_File_Exist(fileName)) {
         ReadFileTxt(fileName);
         cout << "Saisir le contenu du fichier a ajouter et tapper #end# ou ctrl+D pour quitter" << endl;
         SaveFile(fileName);
      }else {
         cout << "Saisir le contenu du fichier et tapper #end# ou ctrl+D pour quitter"           << endl;
         SaveFile(fileName);
      }
      do {
         cout << "recommencer ? [o/n]";
         cin >> res;
         if (tolower(res) == N) {
            restart = false;
         }
      } while (res != O and res != N);
   } while (restart);
}

void ReadFileTxt(const string &file) {
   ifstream file_to_read;
   file_to_read.open(file, ios::app);
   if (!file_to_read) {
      cerr << "Error to open file" << endl;
   }else {
      string line;
      while (getline (file_to_read, line)) {
         cout << line << endl;
      }
   }
}

bool Is_File_Exist(const string &file) {
   ifstream file_to_read;
   file_to_read.open(file);
   if (!file_to_read) {
      return false;
   }
   file_to_read.close();
   return true;
}
