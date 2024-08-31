#ifndef ARTICULO_H /* guardas*/
#define ARTICULO_H

#include <iostream>
#include <string>
using namespace std;

/*clase articulo*/
class Articulo {
private:
/* atributos*/
    string nombre;
    int precio;             
    

public:
/* metodos */
    Articulo(); 
    Articulo(string nombre, int precio); 
    string getnombre() const;
    int getprecio() const; 
    void imprime() const;
    void setnombre(string);
    void setprecio(int);
};

#endif

