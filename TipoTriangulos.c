int main(void) {
  float lado1,lado2,lado3;
  printf("Ingrese el lado1 del triangulo:");
  scanf("%f",&lado1);
  printf("Ingrese el lado2 del triangulo:");
  scanf("%f",&lado2);
  printf("Ingrese el lado3 del triangulo:");
  scanf("%f",&lado3);
  if(lado1==lado2 && lado2==lado3){
    printf("El triangulo es equilatero");
  }
  else{
    if(lado1!=lado2 && lado2!=lado3){
      printf("El triangulo es escaleno");
    }
    else{
      printf("El triangulo es isosceles");
    }
  }
}


