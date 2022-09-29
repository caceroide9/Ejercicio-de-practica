#include <stdio.h>  
#include <string.h>

typedef struct fraccion{
int num;
int den;
} RACIONAL;

RACIONAL crear_racional();
void escribir_racional(RACIONAL Q);
RACIONAL suma(RACIONAL q1);
RACIONAL producto(RACIONAL q1);
RACIONAL division(RACIONAL q1);
RACIONAL resta(RACIONAL q1);
int mcd(int x, int y);
RACIONAL irreductible(RACIONAL q3);



int main(){
  int opcion;
  RACIONAL q1,q2,q3;
  do{
    printf("\n1. Crear un RACIONAL\n");
    printf("2. Escribir un RACIONAL\n");
    printf("3. Sumar 2 RACIONALES\n");
    printf("4. Restar RACIONALES\n");
    printf("5. Multiplicar 2 RACIONALES\n");
    printf("6. Dividir 2 RACIONALES\n");
    printf("7. Salir.\n\n");
    printf("Opcion:\n");
    scanf("%d", &opcion);
    switch (opcion){
      case 1:
        q1=crear_racional();
        break;
      case 2: 
        escribir_racional(q1);
        break;
      case 3:
        q3=suma(q1);
        printf("La suma es: %d/%d\n",q3.num,q3.den);
        break; 
      case 4:
        q3=resta(q1);
        printf("La resta es: %d/%d\n",q3.num,q3.den);
        break;
      case 5:
        q3=producto(q1);
        printf("El producto es: %d/%d\n",q3.num,q3.den);
        break;
      case 6:
        q3=division(q1);
        printf("La division es: %d/%d\n",q3.num,q3.den);
        break;
      }
    }
    while (opcion != 7);
  return 0;
  }

RACIONAL crear_racional(){
  RACIONAL q1;
  printf("\nIngrese el numerador de la fraccion 1: ");
  scanf("%d",&q1.num);
  do{
  printf("Ingrese el denominador de la fraccion 1: ");
  scanf("%d",&q1.den);}while(q1.den==0);
  return q1;
}

void escribir_racional(RACIONAL Q){
  printf("\nLa fraccion es: %d/%d\n", Q.num, Q.den);
}

int mcd(int x, int y)
{
  if(y==0)
    return x;
  else
    return mcd(y,x%y);
}

  
RACIONAL irreductible(RACIONAL q3){
  RACIONAL qaux;
  qaux.num=q3.num/mcd(q3.num,q3.den);
  qaux.den=q3.den/mcd(q3.num,q3.den);
  return qaux;
}
  

RACIONAL suma(RACIONAL q1){
  RACIONAL q2,q3;
  printf("\nIngrese el numerador de la fraccion 2: ");
  scanf("%d",&q2.num);
  printf("Ingrese el denominador de la fraccion 2: ");
  scanf("%d",&q2.den);
  q3.num=q1.num*q2.den+q2.num*q1.den;
  q3.den=q1.den*q2.den;
  mcd(q3.num, q3.den);
  return irreductible(q3);
}

RACIONAL resta(RACIONAL q1){
  RACIONAL q2,q3;
  printf("\nIngrese el numerador de la fraccion 2: ");
  scanf("%d",&q2.num);
  printf("Ingrese el denominador de la fraccion 2: ");
  scanf("%d",&q2.den);
  q3.num=q1.num*q2.den-q2.num*q1.den;
  q3.den=q1.den*q2.den;
  mcd(q3.num, q3.den);
  return irreductible(q3);
}

RACIONAL producto(RACIONAL q1){
  RACIONAL q2,q3;
  printf("\nIngrese el numerador de la fraccion 2: ");
  scanf("%d",&q2.num);
  printf("Ingrese el denominador de la fraccion 2: ");
  scanf("%d",&q2.den);
  q3.num=q1.num*q2.num;
  q3.den=q1.den*q2.den;
  mcd(q3.num, q3.den);
  return irreductible(q3);
}

RACIONAL division(RACIONAL q1){
  RACIONAL q2,q3;
  printf("\nIngrese el numerador de la fraccion 2: ");
  scanf("%d",&q2.num);
  do{
    printf("Ingrese el denominador de la fraccion 2: ");
    scanf("%d",&q2.den);} while(q2.den==0);
  q3.num=q1.num*q2.den;
  q3.den=q1.den*q2.num;
  mcd(q3.num, q3.den);
  return irreductible(q3);

}