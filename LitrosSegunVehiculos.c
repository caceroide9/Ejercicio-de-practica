#include <stdio.h>

//93=$610
//95=$630
//97=$650

int ventadia(int n){
  int tipo=0, litros=0, cont=1, monto, monto_total=0;
  printf("Ingrese a cuantos vehiculos se les echara gasolina:");
  scanf("%d",&n);
  for(cont=1;cont<=n;cont++){
    printf("Ingrese el tipo de gasolina que quiere el vehiculo %d (93,95 o 97): ",cont);
    scanf("%d",&tipo);
    printf("Ingrese los litros que desea el vehiculo %d: ",cont);
    scanf("%d",&litros);
    if(tipo==93){
      monto=610*litros;
      }
    else{
      if(tipo==95){
        monto=630*litros;
        }
      else{
        monto=650*litros;
        }
      }
    monto_total=monto+monto_total;
    }
  return(monto_total);
}

int main(void) {
  int n;
  printf("El monto recaudado por la gasolinera es %d",ventadia(n));
  }