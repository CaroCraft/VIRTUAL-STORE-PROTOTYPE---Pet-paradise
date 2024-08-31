#include <iostream>
#include <string>
using namespace std;


/* clase cliente */
class Cliente
{
private:
/* atributos*/
    string usuario;
    string contrasena;

public:
/* metodos */
    Cliente();
    Cliente(string usuario, string contrasena);
    string getusuario();
    string getcontrasena();
    void setusuario(string);
    void setcontrasena(string);
    void registrarse();
};