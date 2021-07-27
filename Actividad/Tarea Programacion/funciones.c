// creando la funcion crear xd
int largo(int a){
    printf("Ingrese el mayor grado de su polinomio: ");
    scanf("%d",&a);
    while(a<0 || a>19){
        printf("\nIngrese un grado valido: ");
        scanf("%d",&a);
    }
    return a;
}

void crear (float polinomio[],int n){
    int i;
    for(i=0;i<n+1;i++){
        printf("Ingrese valor de x^%d: ",i);
        scanf("%f",&polinomio[i]);
    }
    printf("\n");
}

void mostrar (float polinomio[], int n){
    int i;
    printf("Su polinomio es:\n");
    for(i=0;i<n+1;i++){
        if(polinomio[i]!=0 && i==0){
            printf("+ %.1f ",polinomio[i]);
        }
        else if(polinomio[i]!=0 && i==1){
            printf("+ %.1fx ",polinomio[i]);
        }
        else if(polinomio[i]!=0){
            printf("+ %.1fx^%d ",polinomio[i],i);
        }
    }
    printf("\n");
}

void derivar (float polinomio[], int n){
    float derivado[20];
    int i;
    printf("El polinomio derivado es:\n");
    for(i=0;i<n+1;i++){
        derivado[i]=polinomio[i]*i;
        if(derivado[i]!=0 && i==1){
            printf("+ %.1f ",derivado[i]);
        }
        else if(derivado[i]!=0 && i==2){
            printf("+ %.1fx ",derivado[i]);
        }
        else if(derivado[i]!=0){
            printf("+ %.1fx^%d ",derivado[i],i-1);
        }
    }
    printf("\n");
}

// aqui se creara un nuevo polinommio para poder realizar la suma
void sumar (float polinomio[], int n){
    float nuevopolinomio[20];
    float suma[20];
    int b, i;
    printf("Ingrese un nuevo polinomio para sumar:\n");
    crear(nuevopolinomio,n);
    printf("La suma es:\n");
        for(i=0;i<n+1;i++){
            suma[i]=nuevopolinomio[i]+polinomio[i];
            if(suma[i]!=0 && i==0){
                printf("+ %.1f ",suma[i]);
            }
            else if(polinomio[i]!=0 && i==1){
                printf("+ %.1fx ",suma[i]);
            }
            else if(polinomio[i]!=0){
                printf("+ %.1fx^%d ",suma[i],i);
            }
        }
    printf("\n");

}

//crearemos otro polinomio como antes
void multiplicar(float polinomio[], int n){
    float nuevopolinomio[20];
    float multiplicado[40];
    int i,j;
    printf("Ingrese un nuevo polinomio para multiplicar:\n");
    crear(nuevopolinomio,n);
    for(i=0;i<n+1;i++){
        multiplicado[i]=0;
    }
    printf("El polinomio resultante es:\n");
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++){
            multiplicado[i+j]=multiplicado[i+j]+polinomio[i]*nuevopolinomio[j];
        }
    }
    for(i=0;i<2*n+1;i++){
        if(multiplicado[i]!=0 && i==0){
            printf("+ %.1f ",multiplicado[i]);
        }
        else if(multiplicado[i]!=0 && i==1){
            printf("+ %.1fx ",multiplicado[i]);
        }
        else if(multiplicado[i]!=0){
            printf("+ %.1fx^%d ",multiplicado[i],i);
        }
    }
    printf("\n");

}

void evaluar(float polinomio[], int n){
    int x;
    printf("Ingrese valor de x: ");
    scanf("%d",&x);
    float resultado=0;
    int i;
    for(i=0;i<n+1;i++){
        resultado=resultado+polinomio[i]*pow(x,i);
    }
    printf("\nEl polinomio evaluado en %d es: %.1f\n",x,resultado);
}



