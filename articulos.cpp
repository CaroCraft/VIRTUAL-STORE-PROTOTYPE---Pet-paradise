#include "articulos.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
fstream file;

/* Constructores */
Articulo::Articulo() {
  
}

Articulo::Articulo(string n, int p) {
    nombre = n;
    precio = p;
}


/* método que imprime el archivo articulos */
void Articulo::imprime() const {
    string texto;
    string linea;
    ifstream  archivo("Proyecto/articulos.txt");
    while (getline(archivo, linea)){
        texto = texto + linea + "\n";
    }
    archivo.close();
    cout << texto << endl;
}

/* setters y getters */
void Articulo::setnombre(string n) {
    nombre = n;
}

void Articulo::setprecio(int p) {
    precio = p;
}

string Articulo::getnombre() const{
    return nombre;
}

int Articulo::getprecio() const {
    return precio;
}
