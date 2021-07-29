#include <iostream>
#include <stdio.h>
using namespace std;
typedef int matriz[10][10];

void crear_a(matriz a,int m,int n){
    int i,j;{
    cout<<"Ingrese los elementos de su primera matriz"<<endl;
    for (i=0;i<m;i++)
        for (j=0;j<n;j++){
             cout<<"A"<<i<<j;
             cin>>a[i][j];}}}
void crear_b(matriz b,int f,int c){
    int i,j;{
    cout<<"Ingrese los elementos de su primera matriz"<<endl;
    for (i=0;i<f;i++)
        for (j=0;j<c;j++){
             cout<<"B"<<i<<j;
             cin>>b[i][j];}}}
void crear_c(matriz a,matriz t,int m,int n){
    int i,j,k,x0=0,x;
    cout<<"Ingrese Cantidad de Veces a Multiplicar";
    cin>>x;
    matriz aux,suma;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (i==j){
                aux[i][j]=1;}
            else{
                aux[i][j]=0;}}}
        while (x0<x){
            for (i=0;i<m;i++){
                for (j=0;j<n;j++){
                    suma[i][j]=0;}}
            for (i=0;i<m;i++){
                for (j=0;j<n;j++){
                    for (k=0;k<n;k++){
                        suma[i][j]=suma[i][j]+aux[i][k]*a[k][j];}
                    }}
            for (i=0;i<m;i++){
                for (j=0;j<n;j++){
                    aux[i][j]=suma[i][j];}}
            x0=x0+1;}
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            t[i][j]=aux[i][j];}}}

void ver_c(matriz t,int m,int n){
    int i,j;
  for (i=0;i<m;i++){
    cout<<"F"<<i<<":";
    for (j=0;j<n;j++){
        cout<<"C"<<j<<":"<<t[i][j]<<" ";}
    cout<<"\n";}}
int main(){
    int m,n;
    matriz a,t;
cout <<"INGRESE LA PRIMERA MATRIZ"<<endl;
cout <<"Fila"<<endl;
cin>>m;
cout <<"Columna"<<endl;
cin>>n;
//cout <<"INGRESE LA SEGUNDA MATRIZ"<<endl;
//cout <<"Fila"<<endl;
//cin>>f;
//cout <<"Columna"<<endl;
//cin>>c;
crear_a(a,m,n);
crear_c(a,t,m,n);
ver_c(t,m,n);
}
