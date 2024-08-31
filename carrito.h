#ifndef CARRITO_H /*guardas*/
#define CARRITO_H

#include <iostream>
#include <string>
#include <vector>
#include "articulos.h"
using namespace std;

/* clase carrito*/
class Carrito {
private:
/*atributos*/
    vector <Articulo> carrito;
    string nombre;
    int precio;
  
public:
/*metodos*/
    Carrito(); 
    Carrito(string nombre, int precio); 
    void cesta();
    void buscarArticulo();
    void ticket();
  
};

#endif