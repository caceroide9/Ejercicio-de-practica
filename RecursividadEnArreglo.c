#include <stdio.h>

void llenar(int arreglo[],int);
void imprimir(int arreglo[],int);
int sumar(int arreglo[],int);


int main(void) {
  int arreglo[10];
  int n;
  scanf("%d",&n);
  llenar(arreglo,n);
  imprimir(arreglo,n);
  printf("%d",sumar(arreglo,n));
}

void llenar(int arreglo[],int n){
  int i;
  printf("llena tu arreglo");
  for(i=0;i<n;i++){
    scanf("%d",&arreglo[i]);
  }
}

void imprimir(int arreglo[],int n){
  if(n==0){
    NULL;
  }
  else{
    imprimir(arreglo,n-1);
    printf("%d",arreglo[n-1]);
  }
}

int sumar(int arreglo[],int n){
  if(n==0){
    return 0;
  }
  else{
    return sumar(arreglo,n-1)+arreglo[n-1];
  }
}

