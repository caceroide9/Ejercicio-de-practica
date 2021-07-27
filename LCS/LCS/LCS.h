#ifndef OPERADORES_H_INCLUDED
#define OPERADORES_H_INCLUDED
//Declarativa de una LCS
typedef struct Nodo{
    int Info;
    struct Nodo *Link;
}Nodo;

typedef Nodo *Lista;

//Operadores
void agregar(Lista &, int);
void Listar(Lista);
int contar(Lista);
int sumar(Lista);
bool buscar(Lista,int);
int ultimo(Lista);
void agregult(Lista, int);
void eliseg(Lista);
void abrir(Lista);
#endif // OPERADORES_H_INCLUDED
