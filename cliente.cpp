#include "cliente.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*constructores*/
Cliente::Cliente(){
}

Cliente::Cliente(string _usuario, string _contrasena){
    usuario=_usuario;
    contrasena=_contrasena;
}

/* setters y getters*/
string Cliente::getusuario()
{
    return usuario;
}

string Cliente::getcontrasena()
{
    return contrasena;
}

// setters
void Cliente::setusuario(string _usuario)
{
    usuario=_usuario;
}
void Cliente::setcontrasena(string _contrasena)
{
    contrasena=_contrasena;
}

/* método para el registro del nuevo usuario*/
void Cliente::registrarse()
{
    ofstream archivo;
    archivo.open ("Proyecto/usuarios.txt", ios::app);
    if (archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    } else {
    cout << endl << "NUEVA CUENTA" << endl;
    cout << endl << "Ingrese su usuario: "<<endl;
    cin >> usuario;
    cout << endl << "Ingrese su contraseña: "<<endl;
    cin >> contrasena;
    archivo<<endl << usuario << " " << contrasena << endl;
    cout << "CUENTA CREADA" << endl;
    archivo.close();
    }
}