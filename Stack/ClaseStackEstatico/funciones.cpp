#include <iostream>
#include "funciones.h"
using namespace std;

int sumar(Stack S){
    int sum = 0;
    while(! S.Empty()){
        sum = sum + S.Pop();
    }
    return sum;
}


void imprimir(Stack S){
	Stack R;
	int e;
	while (! S.Empty()){
		e = S.Pop();
		cout << "valor " << e << endl;
		R.Push(e);
	}
	while (! R.Empty()){
		e = R.Pop();
		S.Push(e);
	}
}

int elementos(Stack S){
    Stack R;
    int e,cont=0;
    while(!S.Empty()){
            e=S.Pop();
            cont++;
            R.Push(e);}
    while(!R.Empty()){
        e=R.Pop();
        S.Push(e);}
    return cont;}

int bottom(Stack S){
    Stack R;
    int e,ter;
    while(!S.Empty()){
        e=S.Pop();
        R.Push(e);}
    ter=R.Pop();
    S.Push(ter);
    while(!R.Empty()){
        e=R.Pop();
        S.Push(e);}
    return ter;}

int posicion(Stack S,int k){
    int ter,cont=0,e;
    Stack R;
    while(!S.Empty()){
        e=S.Pop();
        cont++;
        if(k==cont){
            ter=e;}
        else{}
        R.Push(e);}
    while(!R.Empty()){
        e=R.Pop();
        S.Push(e);
    }return ter;}
bool reset(Stack S){
    Stack R;
    int e;
    while(!S.Empty()){
        e=S.Pop();
        R.Push(e);}
    if(S.Empty()){
        return true;}
    else{
        return false;
    }
}

bool soniguales(Stack S,Stack R){
    Stack Aux;
    int e,cont=0,cont2=0;
    while(!S.Empty()){
        e=S.Pop();
        cont=cont+1;
        Aux.Push(e);}
    while(!Aux.Empty()){
        e=Aux.Pop();
        S.Push(e);}
    while(!R.Empty()){
        e=R.Pop();
        cont2=cont2+1;
        Aux.Push(e);}
    while(!Aux.Empty()){
        e=Aux.Pop();
        R.Push(e);}
    if(cont==cont2){
        while(!S.Empty()){
            e=S.Pop();
            if(e!=R.Pop()){
                return false;}

            else{
                return true;}}}
    else{
        return false;
    }}
void PyI(Stack S){
    Stack I,P;
    int e;
    while(!S.Empty()){
        e=S.Pop();
        if(e%2==0){
            P.Push(e);}
        else{
            I.Push(e);
        }
    }cout<<"Pares"<<endl;
    imprimir(P);
    cout<<"Impares"<<endl;
    imprimir(I);
    }
void duplicar(Stack S){
    Stack R;
    int e;
    while(!S.Empty()){
        e=S.Pop();
        R.Push(e);}
    while(!R.Empty()){
        e=(R.Pop());
        S.Push(e*e);
    }
    imprimir(S);
    }
void inter(Stack S){
    Stack R;
    int e,pri=0,ult=0;
    pri=S.Pop();
    while(!S.Empty()){
            e=S.Pop();
            R.Push(e);}
    ult=R.Pop();
    S.Push(pri);
    while(!R.Empty()){
        e=R.Pop();
        S.Push(e);}
    S.Push(ult);
    cout<<"Intercambiar"<<endl;
    imprimir(S);}
void medio(Stack S){
    Stack R;
    int e,cont=0;
    while(!S.Empty()){
            e=S.Pop();
            cont=cont+1;
            R.Push(e);}
    while(!R.Empty()){
        e=R.Pop();
        if(e!=(cont/2)){
            S.Push(e);}}
            cout<<"sin medio"<<endl;
    imprimir(S);
    }


