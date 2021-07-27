#include <iostream>

using namespace std;

void crear(int A[],int n){
    int i;
    cout<<"Ingrese datos"<<endl;
    for(i=0;i<n;i++){
        cout<<"A["<<i<<"]";
        cin>>A[i];}}

void mostrar(int A[],int n){
    int i;
    cout<<"Su arreglo es"<<endl;
    for(i=0;i<n;i++){
        cout<<"A["<<i<<"]"<<A[i]<<endl; }}

void ordenar(int A[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(A[i]<A[j]){
                int aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
        }
    }
}

int contarpares(int A[],int n){
    int i,cont=0;
    for(i=0;i<n;i++){
        if(A[i]%2==0){
            cont++;}}
    return cont;}

int maximo(int A[],int n){
    int i,MAX=-1;
    for(i=0;i<n;i++){
        if(A[i]>MAX){
            MAX=A[i];}}
    return MAX;}

int repetidos(int A[],int n,int e){
    int i,cont=0;
    for(i=0;i<n;i++){
        if(A[i]==e){
            cont++;
        }
    }
    return cont;}

float promedio(int A[],int n){
    int i,cont=0;
    for(i=0;i<n;i++){
        cont=cont+A[i];}
        return cont/n; }

int sumarim(int A[],int n){
    int i,cont=0;
    for(i=0;i<n;i++){
        if(A[i]%2!=0){
            cont=cont+A[i];}
    }
    return cont;}

int pri(int A[],int n){
    int i,pri=0;
    for(i=0;i<n;i++){
        if(i==0){
            pri=A[i];}}
    return pri;}

int ult(int A[],int n){
    int i,aux=n,ult=0;
    for(i=0;i<n;i++){
        if(i==aux-1){
            ult=A[i];
        }
    }return ult;}

int terc(int A[],int n){
    int i,c=n/2,te=0;
    for(i=0;i<n;i++){
        if(i==c){
            te=A[i];
        }
    }return te;}




