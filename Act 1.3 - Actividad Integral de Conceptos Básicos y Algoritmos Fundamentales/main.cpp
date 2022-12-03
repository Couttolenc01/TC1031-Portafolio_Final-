// =================================================================
//
// File: main.cpp
// Author: Francisco Couttolenc Ortiz
// fecha: 11/09/2022
//
// =================================================================
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <time.h>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "bubble.h"

int main(int argc, char *argv[])
{
  ifstream inputFile;
  ofstream outputFile;

  if (argc != 3)
  {
    cout << "usage: " << argv[0] << " input_file output_file\n";
    return -1;
  }

  inputFile.open(argv[1]);
  outputFile.open(argv[2]);

  if (!inputFile.is_open())
  {
    cout << argv[0] << ": File \"" << argv[1] << "\" not found\n";
    return -1;
  }

  int n;
  string busquedaPrefijo, fecha, hora, puerto, id;

  
  struct bitacora
  {
    int anio;
    int mes;
    int dia;
    string fechaStr;
    string hora;
    string puerto;
    string id;
  };

  vector<bitacora> barcos;


  inputFile >> n;
  inputFile >> busquedaPrefijo;

  for (int i = 0; i < n; i++)
  {
 
    inputFile >> fecha >> hora >> puerto >> id;

    string dia = fecha.substr(0, fecha.find("-"));
    string mes = fecha.substr(3, fecha.find("-"));
    string anio = fecha.substr(6);


    size_t found = id.rfind(busquedaPrefijo);
    if (found != string::npos)
    {

      barcos.push_back({stoi(anio), stoi(mes), stoi(dia), fecha, hora, puerto, id});
    }
  }

  bubbleSortdia(barcos);
  bubbleSortmes(barcos);


  for (int i = 0; i < barcos.size(); i++)
  {
    outputFile << barcos[i].fechaStr << " " << barcos[i].hora << " " << barcos[i].puerto << " " << barcos[i].id << "\n";
  }

  inputFile.close();
  outputFile.close();

  return 0;
  
}






