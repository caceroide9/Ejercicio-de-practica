#include <stdio.h>

//input=[2x1,3x2,6x3,7x4,2x5]
//output=[2x0,6x1,18x2,28x3,10x4]

void llenararreglo(int arreglo[5]){
  int i;
  printf("Ingrese valores del arreglo");
  for(i=1;i<=5;i++){
    scanf("%d",&arreglo[i]);
  }
}

void derivada(int arreglo[5]){
  int i;
  for(i=1;i<=5;i++){
    printf("%d x^%d\n",(arreglo[i])*i,i-1);
  }
}

int main(void) {
  int arreglo[5];
  llenararreglo(arreglo);
  derivada(arreglo);
  return 0;
}