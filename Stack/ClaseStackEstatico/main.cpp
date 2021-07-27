#include <iostream>
#include "stack.h"
#include "funciones.h"
using namespace std;

int main()
{
    int i,j;
    cout << "Clase Stack (con implementacion estarica" << endl;
    Stack S,R;
    for(i=1; i<=5; i++)
        S.Push(i);
    for(j=1;j<=5;j++){
        R.Push(j);}
    cout<<"Son iguales"<<soniguales(S,R)<<endl;

    PyI(S);
    medio(S);
    inter(S);
    cout << "Suma " << sumar(S) << endl;
    cout<< "Elementos"<<elementos(S)<<endl;
    cout<< "Bottom"<<bottom(S)<<endl;
    cout<<"Posicion"<<posicion(S,3)<<endl;
    duplicar(S);
    cout<< "Reset"<<reset(S)<<endl;




   imprimir(S);

    return 0;
}
