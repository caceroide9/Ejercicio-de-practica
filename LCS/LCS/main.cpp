#include <iostream>
#include "LCS.h"

using namespace std;

int main()
{
    cout << "Uso de LCS" << endl;
    Lista C;
    int e;
    C = NULL;
    cout << "Lista Circular" << endl;
    agregar(C,1);
    agregar(C,2);
    agregar(C,3);
    agregar(C,4);
    agregar(C,5);
    agregar(C,6);
    Listar(C);
    cout << "La cantidad de datos es de: " << contar(C) << endl;
    cout << "La auma de todos los datos es: " << sumar(C) << endl;
    cout << "Se encuentra el numero 4? : " << buscar(C,4) << endl;
    cout << "El ultimo valor es : " << ultimo(C) << endl;
    cout << "Ingrese el valor para el ultimo nodo : ";
    cin>>e;
    agregult(C,e);
    cout << "Nuevo con ultimo agregado"<< endl;
    Listar(C);
    cout << "Nuevo orden con ultimo eliminado" << endl;
    eliseg(C);
    Listar(C);
    abrir(C);
    return 0;
}
