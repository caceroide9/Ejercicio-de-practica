#include "Complejo.h"
#include <iostream>
#include<math.h>
using namespace std;

Complejo::Complejo()
{
    //ctor
    real=0;
    imag=0;
}

void Complejo::setreal(int a)
{
    real=a;
    cout << "real = " << real << endl;
}

void Complejo::setimag(int b)
{
    imag=b;
    cout << "imaginaria = " << imag << "i"<< endl;
}

int Complejo::getreal()
{
    return real;
}


int Complejo::getimag()
{
    return imag;
}


void Complejo::ver()
{
    cout << real << " + " << imag << "i"<< endl;
}

float Complejo::modulo(){
	float mo=0;
	mo=sqrt(real*real+imag*imag);
	return mo;}

void Complejo::conjugado(){
	if(imag<0){
		imag=imag+-1;
		cout<<real<<imag;}
	else{
	    cout<<real<<imag;}}
