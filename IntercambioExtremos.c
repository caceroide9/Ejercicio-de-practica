#include <stdio.h>
#include <math.h>

void intercambiarextremos(int,int);
int largodelnumero(int);

int main()
{
  int A=125,B=43459;
  intercambiarextremos(A,B);
}

void intercambiarextremos(int A,int B){
  int result1,result2,result3,result4;
  int elprimerdigotdeA,elprimerdigotdeB;
  int elultimodigotdeA,elultimodigotdeB;
  int elmediodeA,elmediodeB;
  result1=pow(10,largodelnumero(A)-1);
  result2=pow(10,largodelnumero(B)-1);
  result3=pow(10,largodelnumero(A)-2);
  result4=pow(10,largodelnumero(B)-2);
  elprimerdigotdeA=A/result1;
  elprimerdigotdeB=B/result2;
  elultimodigotdeA=A%10;
  elultimodigotdeB=B%10;
  elmediodeA=(A/10)%result3;
  elmediodeB=(B/10)%result4;
  printf("%d%d%d",elultimodigotdeB,elmediodeA,elprimerdigotdeB);
  printf("\n");
  printf("%d%d%d",elultimodigotdeA,elmediodeB,elprimerdigotdeA);
  
}

int largodelnumero(int aux){
  int cont=0;
  while(aux!=0){
    aux=aux/10;
    cont++;
  }
  return cont;
  
}


