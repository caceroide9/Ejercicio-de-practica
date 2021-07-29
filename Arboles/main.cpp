#include <iostream>
#include "windows.h"
#include "conio.h"

using namespace std;
template <class T>
class Lista
{
    private:
        class Nodo
        {
        public:
            Nodo(const T dat, Nodo *link = NULL) :
            dato(dat), siguiente(link) {}
            T dato;
            Nodo *siguiente;
            Nodo * Get_dato(){ return dato;}
        };
        Nodo *LLS;
        int numNodos;
    public:
        Lista() : LLS(NULL), numNodos(0) {}
        ~Lista() { limpiar(LLS); }
        T pedir();
        void add1(const T);
        void Mostrar();
        void agregarEn(int n, const T);
        void remove1(int n);
        void remove2(const T);
        int size1();
        T obtener(int n);
        bool isEmpty();
        int indexOf(const T);
        int lastindexOf(const T);
        void reemplazar(int i, const T);
        bool contains(const T);
    private:
        void limpiar(Nodo* &);
};
template <typename T>
void Lista<T>::add1(const T dat)
{
    Nodo *nuevo = new Nodo (dat);
    Nodo *temp = LLS;

    if (LLS==NULL) {
        LLS = nuevo;
    }
    else{
        while (temp->siguiente!=NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente=nuevo;
    }
    numNodos++;
}

template <typename T>
void Lista<T>::Mostrar(){
    Nodo *aux=LLS;
    if(LLS==NULL){
        cout<<"La Lista esta vacia!"<<endl;
    }
    else{
        while(aux!=NULL){
            cout<<aux->dato<<"--> ";
            aux=aux->siguiente;
        }
    }
    cout<<endl;
}

template <class T>
void Lista<T>::remove1(int n){
    Nodo *aux=LLS;
    Nodo *ant;
    int cont=1;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
    }
    else if(n==cont){
        LLS=aux->siguiente;
        goto L1;
    }
    else if(n>numNodos){
        cout<<"La posicion i-esima '"<<n<<"' no existe en la Lista!"<<endl;
    }
    else{
        while(aux!=NULL && cont!=0){
            if(n==cont){
                ant->siguiente=aux->siguiente;
                L1:
                    cout<<"Elemento eliminado: "<<aux->dato<<endl;
                    delete aux;
                    cout<<"Nueva Lista:\n";
                    Mostrar();
                    cont=0;
                    numNodos--;
            }else{
                ant=aux;
                aux=aux->siguiente;
                cont++;
            }
        }
    }
}

template <class T>
void Lista<T>::remove2(const T dat){
    Nodo *aux=LLS;
    Nodo *ant;
    int cont=1;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
    }
    else if(aux->dato==dat){
        LLS=aux->siguiente;
        goto L1;
    }
    else{
        while(aux!=NULL && cont!=0){
            if(aux->dato==dat){
                ant->siguiente=aux->siguiente;
                L1:
                    cout<<"\nLa primera ocurrencia del elemento '"<<dat<<"' en el nodo "<<cont<<" a sido eliminado!"<<endl;
                    delete aux;
                    cout<<"\nNueva Lista:\n";
                    Mostrar();
                    cont=0;
                    numNodos--;
            }else{
                ant=aux;
                aux=aux->siguiente;
                cont++;
            }
        }
        if(cont!=0){
            cout<<"El elemento '"<<dat<<"' no se encontro en la Lista!"<<endl;
        }
    }
}

template <class T>
void Lista<T>::limpiar(Nodo* &nodo){
    if(nodo!=NULL){
        limpiar(nodo->siguiente);
        delete nodo;
        nodo = NULL;
        numNodos=0;
    }
}
template <class T>
int Lista<T>::size1(){
    return numNodos;
}
template <class T>
T Lista<T>::obtener(int n){
    Nodo *aux=LLS;
    int cont=1;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
    }
    else{
        while(aux!=NULL && cont!=0){
            if(n==cont){
                cont=0;
            }
            else{
                cont++;
                aux=aux->siguiente;
            }
        }
    }
    return aux->dato;
}
template <class T>
bool Lista<T>::isEmpty(){
    if(LLS==NULL){
        return true;
    }
    else{
        return false;
    }
}

template <class T>
int Lista<T>::indexOf(const T n){
    Nodo *aux=LLS;
    int cont=1;
    bool condicion=true;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
        cont=0;
    }
    else{
        while(aux!=NULL && condicion==true){
            if(n==aux->dato){
                condicion=false;
            }
            else{
                aux=aux->siguiente;
                cont++;
            }
        }
        if(condicion==true){
            cont=0;
        }
    }
    return cont;
}

template <class T>
int Lista<T>::lastindexOf(const T n){
    Nodo *aux=LLS;
    int cont=1;
    int posicion=0;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
        cont=0;
    }
    else{
        while(aux!=NULL){
            if(n==aux->dato){
                posicion=cont;
            }
            cont++;
            aux=aux->siguiente;
        }
    }
    return posicion;
}

template<class T>
void Lista<T>::reemplazar(int i,const T n){
    Nodo *aux=LLS;
    int cont=1;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
    }
    else if(i>numNodos){
        cout<<"La posicion i-esima '"<<i<<"' no existe en la Lista!"<<endl;
    }
    else{
        while(aux!=NULL && cont!=0){
            if(i==cont){
                aux->dato=n;
                cont=0;
            }
            else{
                cont++;
                aux=aux->siguiente;
            }
        }
    }
}

template <class T>
bool Lista<T>::contains(const T n){
    Nodo *aux=LLS;
    if(aux==NULL){
        cout<<"La Lista esta vacia!"<<endl;
    }
    else{
        while(aux!=NULL){
            if(n==aux->dato){
                return true;
            }
            aux=aux->siguiente;
        }
    }
    return false;
}

int menu(){

    int opc;
    do{
    cout<<"\n************Menu************\n\n";
    cout<<"1. Agregra un elemento\n";
    cout<<"2. \n";
    cout<<"3. Mostrar elementos de la Lista\n";
    cout<<"4. Eliminar elemento de la i-esima posicion\n";
    cout<<"5. Eliminar la primera ocurrencia de un elemento\n";
    cout<<"6. Eliminar todos los elementos de la lista\n";
    cout<<"7. Determinar tamano (cantidad de elementos) de la lista\n";
    cout<<"8. Obtener el i-esimo elemento de la lista\n";
    cout<<"9. Determinar si la lista esta vacia\n";
    cout<<"10. Determina la POSICION de la PRIMERA ocurrencia de un elemento\n";
    cout<<"11. Determina la POSICION de la ULTIMA ocurrencia de un elemento\n";
    cout<<"12. Reemplazar el i-esimo elemento por otro\n";
    cout<<"13. Determinar si un elemento existe dentro de la lista\n";
    cout<<"0. Salir\n";
    cout<<"Opcion: ";
    cin>>opc;
    if(opc<0 || opc>14){
        system("cls");
        cout<<"opcion invalida!\n";
        getch();
        system("cls");
    }
    }while(opc<0 || opc>14);
    return opc;
}

template<class T>
T Lista<T>::pedir(){
    T val;
    cout<<"ingrese elemento: "; cin>>val;
    return val;
}

int main(){

    Lista <int>l;
    int opc;
    int numero;
    do{
        opc=menu();
        system("cls");
        switch(opc){
            case 1:
                cout<<"agregar\n\n";
                l.add1( l.pedir() );
                cout<<"Elemento Agregado con exito!\n";
                break;
            case 2:
                cout<<"\n";
                break;
            case 3:
                cout<<"Elementos de la Lista\n";
                l.Mostrar();
                break;
            case 4:
                cout<<"Ingrese la posicion que desea eliminar: ";
                cin>>numero;
                l.remove1(numero);
                break;
            case 5:
                cout<<"Eliminar la primera ocurrencia de un elemento\n\n";
                l.remove2( l.pedir() );
                break;
            case 6:
                l.~Lista();
                cout<<"TODOS los elementos de la Lista han sido eliminados!"<<endl;
                l.Mostrar();
                break;
            case 7:
                cout<<"Tamano de la Lista: "<<l.size1()<<endl;
                break;
            case 8:
                cout<<"Ingrese la posicion del elemento que desea obtener: ";
                cin>>numero;
                if(l.isEmpty()==1){
                    cout<<"La Lista esta vacia!"<<endl;
                }
                else{
                    cout<<"\nElemento en la posicion '"<<numero<<"' de la Lista: "<<l.obtener(numero)<<endl;
                }
                break;
            case 9:
                cout<<"Estado de la lista\n\n";
                cout<<"Lista vacia?---> ";
                if( l.isEmpty() == 1){
                    cout<<"True\n";
                }
                else{
                    cout<<"false\n";
                }
                break;
            case 10:
                numero=l.indexOf( l.pedir() );
                if(numero != 0){
                    cout<<"Primera ocurrencia encontrada en el nodo: "<<numero<<endl;
                }
                else{
                    cout<<"Elemento no encontrado en la Lista!"<<endl;
                }
                break;
            case 11:
                numero=l.lastindexOf( l.pedir() );
                if(numero != 0){
                    cout<<"Ultima ocurrencia encontrada en el nodo: "<<numero<<endl;
                }
                else{
                    cout<<"Elemento no encontrado en la Lista!"<<endl;
                }
                break;
            case 12:
                cout<<"Ingrese la posicion que desea reemplazar: ";
                cin>>numero;
                l.reemplazar(numero, l.pedir() );
                cout<<"\nElemento reemplazado, nueva lista:"<<endl;
                l.Mostrar();
                break;
            case 13:
                cout<<"\nDeterminar si existe Elemento en la lista"<<endl;

                if( l.contains( l.pedir() ) == 1){
                    cout<<"\nTrue\n";
                }
                else{
                    cout<<"\nFalse\n";
                }
                break;
            case 0:
                cout<<"Fin aplicacion"<<endl;
                break;
        }
        getch();
        system("cls");
    }while(opc!=0);

    return 0;
}
