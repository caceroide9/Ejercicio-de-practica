#include <iostream>
#include "LCS.h"

using namespace std;

void agregar(Lista &C, int e){
    Lista p;
    p = new Nodo;
    p->Info = e;
    if(C==NULL){
        C = p;
        p->Link = C;
    }
    else{
        p->Link = C->Link;
        C->Link = p;
    }
}
void Listar(Lista C){
    Lista p;
    if(C!=NULL){
        p = C;
        cout << "Valor : " << p->Info << endl;
        p = p->Link;
        while(p != C){
            cout << "Valor : " << p->Info << endl;
            p = p->Link;
        }
    }
}

int contar(Lista C){
    Lista p;
    int con = 0;
    if(C!=NULL){
        p = C;
        con++;
        p = p->Link;
        while(p != C){
            con++;
            p = p->Link;
        }
    }
    return con;
}

int sumar(Lista C){
    Lista p;
    int sum = 0;
    if(C!=NULL){
        p = C;
        sum += p->Info;
        p = p->Link;
        while(p != C){
            sum += p->Info;
            p = p->Link;
        }
    }
    return sum;
}
bool buscar(Lista C, int e){
    Lista p;
    bool esta;
    if(C == NULL)
        return false;
    else{
        p = C;
        esta = p->Info == e;
        p = p->Link;
        while(p != C && !esta){
            esta = p->Info == e;
            p = p->Link;
        }
        return esta;
    }
}

int ultimo (Lista C)
{
Lista p;
p=C;
    if(C==NULL)
    {
    }
    else{
        while(p->Link!=C)
            {
              p=p->Link;
            }
        }
return p->Info;

}

void agregult(Lista C, int e)
{
    Lista p,q;
    p = new Nodo;
    p->Info = e;
    q=C;
    if(C==NULL){
    }
    else{
        while(q->Link!=C)
            {
              q=q->Link;
            }
        p->Link = q->Link;
        q->Link = p;
    }
}

void eliseg(Lista C)
{
    Lista p,q;
    p=C;
    p=p->Link;
    q=p;
    q=q->Link;
    C->Link=q;
    p->Link=NULL;

}

void abrir(Lista C)
{
    Lista p;
    p=C;
    if(C==NULL){
    }
    else{
        while(p->Link!=C)
            {
              p=p->Link;
            }
        p=p->Link=NULL;
    }
}
