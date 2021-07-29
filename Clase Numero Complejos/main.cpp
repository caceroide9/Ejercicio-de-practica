#include <iostream>
#include "Complejo.h"

using namespace std;

Complejo sumar(Complejo C1, Complejo C2)
{
   Complejo AUX;
   AUX.setreal(C1.getreal()+C2.getreal());
   AUX.setimag(C1.getimag()+C2.getimag());
   return AUX;
}
Complejo resta(Complejo C1, Complejo C2)
{
   Complejo AUX;
   AUX.setreal(C1.getreal()-C2.getreal());
   AUX.setimag(C1.getimag()-C2.getimag());
   return AUX;
}
Complejo multiplicacion(Complejo C1, Complejo C2)
{
   Complejo AUX;
   AUX.setreal(((C1.getreal())*(C2.getreal()))+((-1)*(C1.getimag())*(C2.getimag())));
   AUX.setimag(((C2.getimag())*(C1.getreal()))+((C1.getimag())*(C2.getreal())));
   return AUX;
}

Complejo division(Complejo C1, Complejo C2)
{
   Complejo AUX;
   AUX.setreal(((C1.getreal())*(C2.getreal()))+((-1)*(C1.getimag())*(C2.getimag()))+(((C2.getimag())*(C1.getreal()))+(-1)*(C1.getimag())*(C2.getreal())));
   AUX.setimag(C2.getreal()+C2.getreal()+(-1)*C2.getimag()*C2.getimag());
   return AUX;
}

int main()
{
    cout << "Clase Complejos" << endl;
    cout << "__________________" << endl;
    cout << endl;
    Complejo C,C1,C2;

    cout << "Primer Imaginario" << endl;
    C1.setreal(3);
    C1.setimag(4);
    C1.ver();
    cout << endl;
    cout << "Segundo Imaginario" << endl;
    C2.setreal(8);
    C2.setimag(9);
    C2.ver();

    cout << endl;

    cout << "Resta" << endl;
    C = resta(C1,C2);
    C.ver();
    cout << endl;

    cout << "Suma" << endl;
    C = sumar(C1,C2);  //llamada de funcion externa
    C.ver();
    cout << endl;

    cout << "Multiplicacion" << endl;
    C = multiplicacion(C1,C2);
    C.ver();
    cout << endl;



    cout << "Division" << endl;
    C = division(C1,C2);
    C.ver();


    return 0;
}
