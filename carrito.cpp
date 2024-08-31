#include "carrito.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

/* constructores*/
Carrito::Carrito() {
}

Carrito::Carrito(string _nombre, int _precio) {
    nombre = _nombre;
    precio = _precio;
}

/* método para la búsqueda de artículos mediante nombre o precio*/
void Carrito::buscarArticulo() {
    string busqueda;
    cout << endl << "Ingrese el nombre o precio del artículo que desea buscar: ";
    cin >> busqueda;
    cout << "Resultados de la búsqueda:" << endl;

    ifstream file;
    file.open("Proyecto/articulos2.txt");
    if (!file.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    } else{

   
    while (file>> nombre >> precio) {
        /* se busca y luego se puede agregar el artículo encontrado y seleccionar la cantidad deseada*/
        if (nombre == busqueda || to_string(precio) == busqueda) {
            cout << "Articulo: " << nombre << " Precio: $" << precio << endl;
            cout << "Agregar a carrito? (1) Si (2) No" << endl;
            int op;
            cin >> op;
            
            if (op == 1){
                cout << "¿Cuántas veces?" << endl;
                int can;
                cin >> can;
                for (int i = 0; i < can; i++) {
                carrito.push_back(Articulo(nombre, precio));
                cout << "Artículo agregado" << endl;
                }
            } else if (op == 2){
                cout << "No se agregará artículo" << endl;
                
            }
        } 
    }
    }
    file.close();
}


/*método cesta para agregar los artículos al vector carrito */
void Carrito::cesta() {
    ifstream file;
    file.open("Proyecto/articulos2.txt");
    if (!file.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    } else {

    vector<pair<string, int>> datos_articulos;

  
    while (file >> nombre >> precio) {
        
        datos_articulos.push_back(make_pair(nombre, precio));
    }
    file.close();

    int opcion;
    cout << endl << "Añade un artículo al carrito por su número de identificación" << endl;
    cout << " o selecciona 24 para acceder al buscador" << endl;
    cin >> opcion;

    int cantidad;
    string nombre_seleccion;
    int precio_seleccion;
        /* dependiendo la opción es el artículo ingresado*/
    switch (opcion) {
        case 1:
            cout << endl<< "¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
            break;
        case 2:
            cout << endl<< "¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
            break;
        case 3:
            cout << endl << "¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 4:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 5:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
            for (int i = 0; i < cantidad; i++) {
                Articulo obj(nombre_seleccion, precio_seleccion);
                carrito.push_back(obj);
            }
            break;
        case 6:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 7:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 8:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 9:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 10:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 11:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 12:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 13:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 14:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 15:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 16:

            cout <<endl<< "¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 17:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 18:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 19:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 20:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 21:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 22:
            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;
        case 23:

            cout << endl<<"¿Cuántos de estos artículos deseas comprar?" << endl;
            cin >> cantidad;
            nombre_seleccion = datos_articulos[opcion - 1].first;
            precio_seleccion = datos_articulos[opcion - 1].second;
        for (int i = 0; i < cantidad; i++) {
            Articulo obj(nombre_seleccion, precio_seleccion);
            carrito.push_back(obj);
        }
        break;

        case 24:
            /* aquí se usa el buscador, usando la case 24*/
        cout << endl<<"¿Desea buscar un artículo antes de agregarlo al carrito? (1) Sí (Cualquier otro número) No" << endl;
        int opcion1;
        cin >> opcion1;
        if (opcion1 == 1) {
            buscarArticulo();
        } else {
            cesta();
        }
        break;

        default:
            cout << "Opción inválida." << endl;
            break;
    }
    }
}


/* método ticket para imprimir el ticket de compra */
void Carrito::ticket() {
    cout << endl<<"Ticket" << endl;
    int total = 0;
    for(int i = 0; i < carrito.size(); i++) {
        const string& nombre = carrito[i].getnombre();
        int precio = carrito[i].getprecio();
        cout << "Articulo: " << nombre << " Precio: $ " << precio << endl;
        total += precio;
        }
    cout << "Total: $ "<<total << endl;
}