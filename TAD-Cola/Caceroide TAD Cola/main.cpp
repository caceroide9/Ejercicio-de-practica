#include <iostream>
#include "clasecolaestatica.h"
#include "funciones.h"
using namespace std;

int main()
{
    cout << "Cola Estatica" << endl;
    ClaseColaEstatica C,R,T;
    C.agregar(1);
    C.agregar(2);
    C.agregar(3);
    C.agregar(4);
    C.agregar(3);
    R.agregar(5);
    R.agregar(2);
    R.agregar(3);
    cout<<soniguales(C,R);
    copiar(C,R);
    partir(C,R,T);

    cout<<"Cola vacia"<<vaa(C)<<endl;
    cout<<"Sus elementos son"<<elementos(C)<<endl;
    pelementos(C,3);
    eliminar(C,3);
    cout<<"Encontrar"<<encontrar(C,3)<<endl;
    cout<<"Posicion"<<posicion(C,3)<<endl;
    cout<<"Su cola"<<endl;
    imprimir(C);

    return 0;
}
