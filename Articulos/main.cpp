#include <iostream>
#include <string>

using namespace std;

void inicio_articulos(string articulos[10],int produccion[10][3]){
	int i,j;
	for(i=0;i<10;i++){
		cout<<"Ingrese el nombre de sus articulo"<<endl;
		cin>>articulos[i];
		for(j=0;j<3;j++){
			cout<<"Ingrese produccion del turno: "<<j+1<<endl;
			cin>>produccion[i][j];
			}
	}

}

void impresion(string articulos[10],int produccion[10][3]){
	int i,j;
	int suma_produccion=0,turno_1=0,turno_2=0,turno_3=0,total_productos=0,mayor=-1,produccion_mayor=0;

	cout<<"ARTICULO"<<" TURNO 1"<<" TURNO 2"<<" TURNO 3"<<" TOTAL PRODUCCION"<<endl;
		for(i=0;i<10;i++){
		cout<<articulos[i];
		for(j=0;j<3;j++){
			cout<<"       "<<produccion[i][j];
			suma_produccion=suma_produccion+produccion[i][j];
			}
			if(suma_produccion>mayor){
				mayor=i;
				produccion_mayor=suma_produccion;
			}

	cout<<"       "<<suma_produccion<<endl;
	total_productos=total_productos+suma_produccion;
	turno_1=turno_1+produccion[i][0];
	turno_2=turno_2+produccion[i][1];
	turno_3=turno_3+produccion[i][2];
	suma_produccion=0;
	}
	cout<<"TOTAL       "<<turno_1<<"       "<<turno_2<<"       "<<turno_3<<"       "<<total_productos<<endl;
	cout<<"ARTICULO CON MAYOR PRODUCCION: "<<articulos[mayor]<<endl;
	cout<<"PRODUCCION DEL ARTICULO MAYOR: "<<produccion_mayor;

}



int main()
{
	string articulos[10];
	int produccion[10][3];
    inicio_articulos(articulos,produccion);
    impresion(articulos,produccion);
    return 0;
}
