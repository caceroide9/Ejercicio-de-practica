#include <iostream>

using namespace std;

int g=0,g2=0,g3=0,g4=0,g5=0;

void gastos_semestrales(int sem){
    int i,j;
    int **gastos;
    gastos = new int*[5]; //Reservando memoria para las filas
    for(int i=0;i<=5;i++){
            gastos[i] = new int[4];}

    for(i=0;i<=5;i++){
        cout<<"Mes: "<<i+1<<endl;
        for(j=0;j<=4;j++){
            if(j==0){
                cout<<"Ingrese gastos de los utiles de la oficina: ";}
            else{
                    if(j==1){
                    cout<<"Ingrese gastos telefonicos: ";}
                else{
                    if(j==2){
                        cout<<"Ingrese gastos de luz: ";}
                    else{
                        if(j==3){
                            cout<<"Ingrese gastos de agua: ";}
                        else{
                            if(j==4){
                                cout<<"Ingrese gastos de salarios: ";}
                        }
                    }
                }
            }
            cin>>gastos[i][j];
            if(j==0){
                g=g+gastos[i][j];
            }
            else{
                if(j==1){
                    g2=g2+gastos[i][j];
                }
                else{
                    if(j==2){
                        g3=g3+gastos[i][j];
                    }
                    else{
                        if(j==3){
                            g4=g4+gastos[i][j];
                        }
                        else{
                            if(j==4){
                                g5=g5+gastos[i][j];
                            }
                        }
                    }
                }
            }

        }
    }
}


void mayor(int GAPR[4]){
    int i,aux=0;
    for(i=0;i<=4;i++){
            if(GAPR[i]>aux){
                aux=i;
            }
    }
    if(aux==0){
        cout<<"El rubro donde mas se gasta es en Utiles de la oficina"<<endl;}
    else{
        if(aux==1){
            cout<<"El rubro donde mas se gasta es en Telefonia"<<endl;}
        else{
            if(aux==2){
                cout<<"El rubro donde mas se gasta es en Luz"<<endl;}
            else{
                if(aux==3){
                    cout<<" El rubro donde mas se gasta es en Agua"<<endl;}
                else{
                    if(aux=4){
                        cout<<"El rubro donde mas se gasta es en Salarios"<<endl;}
                        }
                    }
                }
            }

}

void menor(int GAPR[4]){
    int i,aux=99999;
    for(i=0;i<=4;i++){
            if(GAPR[i]<aux){
                aux=i;
            }
    }
    if(aux==0){
        cout<<"El rubro donde mas se menos es en utiles de la oficina";}
    else{
        if(aux==1){
            cout<<"El rubro donde menos se gasta es en Telefonia";}
        else{
            if(aux==2){
                cout<<"El rubro donde menos se gasta es en Luz";}
            else{
                if(aux==3){
                    cout<<" El rubro donde menos se gasta es en Agua";}
                else{
                    if(aux=4){
                        cout<<"El rubro donde menos se gasta es enSalarios";}
                        }
                    }
                }
            }

}

void imprimir_GAPR(int sem){
    int GAPR[4];
    int i;
    GAPR[0]=g;
    GAPR[1]=g2;
    GAPR[2]=g3;
    GAPR[3]=g4;
    GAPR[4]=g5;

    //menor(GAPR);
    if((sem%2)==0){
        cout<<"El gasto anual del anioo "<<sem/2<<" por rubro es"<<endl;
        for(i=0;i<=4;i++){
                if(i==0){
                cout<<"Gastos de los utiles de la oficina: ";}
            else{
                    if(i==1){
                    cout<<"Gastos telefonicos: ";}
                else{
                    if(i==2){
                        cout<<"Gastos de luz: ";}
                    else{
                        if(i==3){
                            cout<<"Gastos de agua: ";}
                        else{
                            if(i==4){
                                cout<<"Gastos de salarios: ";}
                        }
                    }
                }
            }
        cout<<GAPR[i]<<endl;
        }
    }
    else{
        cout<<"El gasto anual del anioo "<<sem/2<<" mas "<<sem%2<<" semestre por rubro es"<<endl;
        for(i=0;i<=4;i++){
                if(i==0){
                cout<<"Gastos de los utiles de la oficina: ";}
            else{
                    if(i==1){
                    cout<<"Gastos telefonicos: ";}
                else{
                    if(i==2){
                        cout<<"Gastos de luz: ";}
                    else{
                        if(i==3){
                            cout<<"Gastos de agua: ";}
                        else{
                            if(i==4){
                                cout<<"Gastos de salarios: ";}
                        }
                    }
                }
            }
        cout<<GAPR[i]<<endl;
        }
    }
    mayor(GAPR);
    menor(GAPR);
}




int main()
{
    int x=0;
    int sem;
    cout<<"Cuantos semestres desea registrar"<<endl;
    cin>>sem;
    while(x<sem){
        gastos_semestrales(sem);
        x++;}
    imprimir_GAPR(sem);
    return 0;
}
