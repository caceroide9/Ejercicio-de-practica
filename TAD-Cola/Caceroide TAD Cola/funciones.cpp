#include <iostream>
#include "funciones.h"
using namespace std;

void imprimir(ClaseColaEstatica C){
	ClaseColaEstatica R;
	int e;
	while (! C.vacia()){
		e = C.extraer();
		cout << "valor " << e << endl;
		R.agregar(e);
	}
	while (! R.vacia()){
		e = R.extraer();
		C.agregar(e);
	}
}
void copiar(ClaseColaEstatica C, ClaseColaEstatica R){
    cout<<"Copia"<<endl;
    int e;
    while(!C.vacia()){
        e=C.extraer();
        R.agregar(e);}
    imprimir(R);}

bool vaa(ClaseColaEstatica C){
    int e;
    while(!C.vacia()){
        e=C.extraer();}
    if(C.vacia()){
        return true;}
    else{
        return false;
    }}

int elementos(ClaseColaEstatica C){
    ClaseColaEstatica R;
    int e,cont=0;
    while(!C.vacia()){
        e=C.extraer();
        cont++;
        R.agregar(e);}
    while(!R.vacia()){
        e=R.extraer();
        C.agregar(e);}
        return cont;}

void eliminar(ClaseColaEstatica C,int k){
    cout<<"Elimar";
    ClaseColaEstatica R;
    int e;
    while(!C.vacia()){
        e=C.extraer();
        R.agregar(e);}
    while(!R.vacia()){
        e=R.extraer();
        if(e!=k){
                C.agregar(e);}
        else{

        }}imprimir(C);}
void pelementos(ClaseColaEstatica C,int p){
    cout<<"P Elementos"<<endl;
    ClaseColaEstatica R;
    int i=1;
    int e,cont=0;
    while(!C.vacia()){
        e=C.extraer();
        R.agregar(e);}
    while(!R.vacia()){
        e=R.extraer();
    if(i<p){
            i++;
        }
        else{
            C.agregar(e);
            i++;
        }}imprimir(C);}
bool soniguales(ClaseColaEstatica C,ClaseColaEstatica R){
    cout<<"son iguales";
    ClaseColaEstatica Aux;
    int e,cont=0,cont2=0;
    while(!C.vacia()){
        e=C.extraer();
        cont++;
        Aux.agregar(e);}
    while(!Aux.vacia()){
        e=Aux.extraer();
        C.agregar(e);}
    while(!R.vacia()){
            e=R.extraer();
            cont2++;
            Aux.agregar(e);}
    while(!Aux.vacia()){
        e=Aux.extraer();
        R.agregar(e);}
    if(cont==cont2){
            while(!C.vacia()){
                e=C.extraer();
                if(e!=R.extraer()){
                    return false;}
                else{
                    return true;}}}
    else{
        return false;
    }}
void partir(ClaseColaEstatica C,ClaseColaEstatica R,ClaseColaEstatica T){
    int e;
    ClaseColaEstatica aux;
    while(!C.vacia()){
        e=C.extraer();
        aux.agregar(e);}
    while(!aux.vacia()){
        e=aux.extraer();
        if(e<50){
            R.agregar(e);}
        else{
            T.agregar(e);}
    }
    cout<<"R"<<endl;
    imprimir(R);
    cout<<"T"<<endl;
    imprimir(T);}

int encontrar(ClaseColaEstatica C,int en){
    ClaseColaEstatica aux;
    int e,cont=0;
    while(!C.vacia()){
        e=C.extraer();
        aux.agregar(e);}
    while(!aux.vacia()){
        e=aux.extraer();
        if(e==en){
            cont++;
            C.agregar(e);}
        else{
            C.agregar(e);}
    }return cont;}
int posicion(ClaseColaEstatica C,int v){
    int e,cont=0,po=0;;
    ClaseColaEstatica Aux;
    while(!C.vacia()){
        e=C.extraer();
        Aux.agregar(e);}
    while(!Aux.vacia()){
        e=Aux.extraer();
        cont++;
        if(e==v){
                po=cont;
                C.agregar(e);}
        else{
            C.agregar(e);
        }
    }return po;}


