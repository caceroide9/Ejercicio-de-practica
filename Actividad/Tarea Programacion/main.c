#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Autor: Mathias Cáceres\n");
    printf("Descripcion: El programa a continuacion le permitira crear polinomios y aplicar\n");
    printf("las principales operaciones de estos...\n\n");
    int a;
    float polinomio[20];
    int n;
    int xd=0;
    while(a!=7){
        printf("\n\t\tMENU\n\n");
        printf("\t1) Crear un nuevo polinomio\n");
        printf("\t2) Mostrar el polinomio\n");
        printf("\t3) Derivar el polinomio\n");
        printf("\t4) Sumar dos polinomios\n");
        printf("\t5) Multiplicar dos polinomios\n");
        printf("\t6) Evaluar el polinomio\n");
        printf("\t7) Salir\n\n");
        printf("->Ingrese una opcion: ");
        scanf("%d",&a);

        while(a<1 || a>7){
        printf("\n->Ingrese una opcion valida: ");
        scanf("%d",&a);
        }

        switch(a){
        case 1: n=largo(n);
            crear(polinomio,n);
            xd=xd+1;
            break;
        case 2: if(xd==0){
                printf("\nPrimero presione 1\n");
                break;}
            else {mostrar(polinomio,n);
            break;}
        case 3: if(xd==0){
                printf("\nPrimero presione 1\n");
                break;}
            else {derivar(polinomio,n);
            break;}
        case 4: if(xd==0){
                printf("\nPrimero presione 1\n");
                break;}
            else {sumar(polinomio,n);
            break;}
        case 5: if(xd==0){
                printf("\nPrimero presione 1\n");
                break;}
            else {multiplicar(polinomio, n);
            break;}
        case 6: if(xd==0){
                printf("\nPrimero presione 1\n");
                break;}
            else {evaluar(polinomio, n);
            break;}
        case 7: printf("\nHasta pronto\n");
            break;
        }
    }
    return 0;
}
