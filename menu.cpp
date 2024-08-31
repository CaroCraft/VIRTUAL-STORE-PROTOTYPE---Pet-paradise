#include <iostream>
#include <fstream>
#include "cliente.h"
#include "articulos.h" 
#include "carrito.h"
#include <vector>
using namespace std;


/* menú */
int main(int argc, const char * argv[]) {
    fstream file;
    string user, pass;
    string fuser, fpass;
    int opcion;
    int band = 0;
    string tarjeta;
    string pagar;
    Carrito c1;
    /* Se abre el archivo */
    file.open("Proyecto/usuarios.txt");
    if (!file.is_open()) {
        cout << "Error al abrir archivo" << endl;
        return 0;
    } else {
        /* Ingreso de usuario y contraseña */
        cout << endl << "--- BIENVENIDO A PET PARADISE ---" << endl;
        cout << endl << "---------------------------------------" << endl;
        cout << endl << "Ingresa tu Usuario: " << endl;
        cin >> user;
        cout << endl << "Ingresa tu Contraseña: " << endl;
        cin >> pass;
        /* Búsqueda de usuario y contraseña en el archivo */
        while (file >> fuser >> fpass) { 
            if (fuser == user && fpass == pass) {
                band = 1;
                break;
            }
        }
        if (band == 1) {
            int op;
            file.close();
            /* Cuenta identificada */
            cout << endl << "CUENTA IDENTIFICADA" << endl;
            cout << " " << endl;
            cout << endl << "INGRESANDO A PET PARADISE" << endl;
            cout << ". . . . . . . . . . . . . . . . . . . ." << endl;
            Articulo articulo1; 
            articulo1.imprime();
            cout << endl << "¿Quieres comenzar a comprar? (1) Si (Cualquier otra tecla) No" << endl;
            cin >> op;
            /* Comienzo de compra */
            if (op == 1) {

                do {
                    c1.cesta();
                    cout << endl << "¿Quieres seguir comprando? (1) Si (Cualquier otro número) No" << endl;
                    cin >> op;
                } while (op == 1);
                cout << " " << endl;
                c1.ticket(); 
                cout << endl << "Escriba OK para pagar o cualquier otra cosa para salir" << endl;
                cin >> pagar; 
                
                /* pago */
                if (pagar == "OK"){
                    cout << endl <<"Ingresa tu tarjeta"<< endl;
                    cin >> tarjeta;
                    cout << "Pagando con tarjeta: " << tarjeta << endl;
                    cout << "Pago completado" << endl;
                    cout << endl << "Gracias por comprar en PET PARADISE" << endl;
                    exit(0);
                } else {
                    cout << endl << "Gracias por visitar PET PARADISE" << endl;
                    exit(0);
                }
            } else {
                cout << endl << "Gracias por visitar PET PARADISE" << endl;
                exit(0);
            }
        } else {
            /* Registro */
            file.close();
            cout << endl << "USUARIO O CONTRASEÑA INCORRECTOS O INEXISTENTES" << endl;
            cout  << "INTENTAR DE NUEVO (1) O REGISTRARSE (2) O CUALQUIER OTRA TECLA PARA SALIR" << endl;
            cin >> opcion;
            if (opcion == 1) {
                main(argc, argv);
            } else if (opcion == 2) {
                cout << "REGISTRO DE USUARIO" << endl;
                Cliente nuevoUsuario;
                nuevoUsuario.registrarse();
                main(argc, argv);

            } else {
                cout << "Gracias por visitar PET PARADISE" << endl;
            }
        }
        file.close();
    }

    return 0;
}