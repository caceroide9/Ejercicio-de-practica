#include <iostream>

using namespace std;
#include "funcion.h"

int main()
{
    cout << "Arreglos" << endl;
    int A[10];
    int n,e;
    cout<<"Ingrese el largo del arreglo";
    cin>>n;
    cout<<"Ingrese que numero desea buscar";
    cin>>e;
    crear(A,n);
    mostrar(A,n);
    ordenar(A,n);
    cout<<"Ordenado";
    mostrar(A,n);
    cout<<"Sus pares son "<<contarpares(A,n)<<endl;
    cout<<"Su maximo termino es "<<maximo(A,n)<<endl;
    cout<<"Esta repetido su elemento "<<repetidos(A,n,e)<<"veces"<<endl;
    cout<<"Su promedio es:"<<promedio(A,n)<<endl;
    cout<<"Suma impares:"<<sumarim(A,n)<<endl;
    cout<<"La suma del primero y el ultimo es:"<<pri(A,n)+ult(A,n)<<endl;
    cout<<"Termino central:"<<terc(A,n);

    return 0;
}
