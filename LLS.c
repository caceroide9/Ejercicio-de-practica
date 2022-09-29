#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct lista{
int info;
struct lista*next;
}LISTA;


int vacia(LISTA **l);
void crear_lista(LISTA **l);
void insertar_inicio(LISTA **l, int valor);
void eliminar_inicio(LISTA **l);
void insertar_final(LISTA **l, int valor);
void eliminar_final(LISTA **l);
void escribir_lista (LISTA **l);
void size_of_list(LISTA **l);
void find_data(LISTA **l,int item);
void update_data(LISTA **l,int old, int new);
void sum_print(LISTA **l);
void mayor(LISTA **l);
void menor(LISTA **l);
void reverse_print(LISTA **l);
void bubbleSort(LISTA **l);
void swap(LISTA *a, LISTA *b);
void sumar_pares(LISTA **l);
void printMiddle(LISTA **l);
bool search(LISTA **l, int x);
int getCount(LISTA **l);



int main (){
  LISTA *l;
  int v=0;
  int valor;
  int opcion;
  int item;
  int old, nuevo;
  int busqueda_recu;
  int valor_bus;
  crear_lista(&l);
  do{
    printf("\n1. Insertar al inicio\n");
    printf("2. Insertar al final \n");
    printf("3. Eliminar al inicio\n");
    printf("4. Eliminar al final\n");
    printf("5. Escribir lista\n");
    printf("6. Tamanio lista\n");
    printf("7. Elmento a buscar\n");
    printf("8. Actualiazar elemento de la lista\n");
    printf("9. Suma de los elementos\n");
    printf("10. Mayor elemento\n");
    printf("11. Menor elemento\n");
    printf("12. Imprimir alreves\n");
    printf("13. Ordenar nodos\n");
    printf("14. Contar pares\n");
    printf("15. En la mitad\n");
    printf("16. Busqueda recursiva\n");
    printf("17. Contar elementos forma recursiva\n");
    printf("18. Salir del programa\n");
    printf("Ingrese su opcion:\n");
    scanf("%d", &opcion);
    switch (opcion){
      case 1:
        printf("Ingrese el valor a insertar: ");
        scanf("%d",&valor);
        insertar_inicio(&l,valor);
        break;
      case 2:
        printf("Ingrese el valor a insertar: ");
        scanf("%d",&valor);
        insertar_final(&l, valor);
        break;
      case 3:
        eliminar_inicio(&l);
        break;
      case 4:
        eliminar_final(&l);
        break;
      case 5:
        escribir_lista(&l);
        break;
       case 6:
        size_of_list(&l);
        break;
      case 7:
        printf("Ingrese valor a buscar");
        scanf("%d",&item);
        find_data(&l, item);
        break;
      case 8:
        printf("Ingrese valor a reemplazar");
        scanf("%d",&old);
        printf("Ingrese valor nuevo");
        scanf("%d",&nuevo);
        update_data(&l,old,nuevo);
        break;
      case 9:
        sum_print(&l);
        break;
      case 10:
        mayor(&l);
        break;
      case 11:
        menor(&l);
        break;
      case 12:
        reverse_print(&l);
        break;
      case 13:
        bubbleSort(&l);
        break;
      case 14:
        sumar_pares(&l);
        break;
      case 15:
        printMiddle(&l);
        break;
      case 16:
        printf("Ingrese valor a buscar");
        scanf("%d",&busqueda_recu);
        printf("%d",search(&l,busqueda_recu));
        break;
      case 17:
        printf("%d",getCount(&l));
        break;
      }
    }
    while (opcion != 18);
  return 0;
}

int vacia(LISTA **l){
  return (*l==NULL);
}

void crear_lista(LISTA **l){
  *l=NULL;
}

void insertar_inicio(LISTA **l, int valor){
  LISTA *paux;
  paux=(LISTA*)malloc(sizeof(LISTA));
  paux->info=valor;
  paux->next=*l;
  *l=paux;
}



void insertar_final(LISTA **l,int valor){
	LISTA *paux,*qaux;
	paux=(LISTA*)malloc(sizeof(LISTA));
	paux->info=valor;
	paux->next=NULL;
	if (*l==NULL)// SI la lista esta vacia
		*l=paux;
	else{// Lista tiene mas de 0 elemento
		qaux=*l;
		while(qaux->next !=NULL){
      qaux=qaux->next;}
    qaux->next=paux;
	}
}

void eliminar_inicio(LISTA**l){
  LISTA *paux;
  paux=*l;
  *l=paux->next;
  free(paux);
}

void eliminar_final(LISTA **l){
	LISTA *paux,*qaux;
	qaux=*l;
	if (qaux->next == NULL){
		paux->next=*l;
		*l=NULL;
    }
  else{
    while(qaux->next->next!=NULL){
      qaux=qaux->next;}
    paux=qaux->next;
    qaux->next=NULL;
    }
  free(paux);
}

void escribir_lista(LISTA **l){
  LISTA *paux;
  paux=*l;
  while(paux != NULL){
    printf("%d->",paux->info);
    paux=paux->next;
  }
}

void size_of_list(LISTA **l) {
  LISTA *paux;
  int size = 0;
  if(*l==NULL) {
    printf("List size : %d ", size);
    return;
    } 
  paux = *l;
  size = 1;
  while(paux->next!=NULL) {
    paux = paux->next;
    size++;
   }
   printf("Tamaño de la lista : %d ", size);
}

void find_data(LISTA **l,int item) {
   LISTA *paux;
   int pos = 0;
   if(*l==NULL) {
      printf("Linked List not initialized");
      return;
   } 

   paux = *l;
   while(paux->next!=NULL) {
      if(paux->info == item) {
         printf("%d Encontrado en la posicion %d\n", item, pos);
         return;
      }
      
      paux = paux->next;
      pos++;
   }
   
   printf("%d No se encuentra en la lista", item);
}

void update_data(LISTA **l,int old, int nuevo) {
   int pos = 0;
   LISTA *paux;
   if(*l==NULL) {
      printf("Lista no inicializada");
      return;
   } 

   paux = *l;
   while(paux->next!=NULL) {
      if(paux->info == old) {
         paux->info = nuevo;
         printf("\n%d encontrado en la posicion %d, reemplazado por %d\n", old, pos, nuevo);
         return;
      }
      
      paux = paux->next;
      pos++;
   }
   
   printf("%d No existe en la lista\n", old);
}

void sum_print(LISTA **l) {
  LISTA *paux;
  int size = 0;
  if(*l==NULL) {
    printf("Ingresa datos : %d ", size);
    return;
    } 
  paux = *l;
  size = size +paux->info;
  while(paux->next!=NULL) {
    paux = paux->next;
    size = size +paux->info;
   }
   printf("Tamaño de la lista : %d ", size);
   
}

void mayor(LISTA **l) {
  LISTA *paux;
  int size = 0;
  if(*l==NULL) {
    printf("Ingresa datos : %d ", size);
    return;
    } 
  paux = *l;
  if(size<paux->info){
    size=paux->info;
  }
  while(paux->next!=NULL) {
    paux = paux->next;
    if(size<paux->info){
    size=paux->info;}
   }
   printf("Mayor de la lista : %d ", size);
   
}

void menor(LISTA **l) {
  LISTA *paux;
  int size = 9999;
  if(*l==NULL) {
    printf("Ingresa datos : %d ", size);
    return;
    } 
  paux = *l;
  if(size>paux->info){
    size=paux->info;
  }
  while(paux->next!=NULL) {
    paux = paux->next;
    if(size>paux->info){
    size=paux->info;}
   }
   printf("Menor de la lista : %d ", size);
   
}

void reverse_print(LISTA **l) {
  LISTA *paux;
  paux=*l;
  if(*l == NULL) {
      return;
   }
   reverse_print(&paux->next);
   printf(" %d ->",paux->info);
   
}

void bubbleSort(LISTA **l) 
{ 
    int swapped, i; 
    LISTA *paux;
    LISTA *lptr;
     
  
    
    if (*l == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        paux=*l; 
  
        while (paux->next != lptr) 
        { 
            if (paux->info > paux->next->info) 
            { 
                swap(paux, paux->next); 
                swapped = 1; 
            } 
            paux = paux->next; 
        } 
        lptr = paux; 
    } 
    while (swapped); 
} 
  

void swap(LISTA *a, LISTA *b) 
{ 
    int temp = a->info; 
    a->info = b->info; 
    b->info = temp; 
} 


void sumar_pares(LISTA **l){
  LISTA *paux;
  int size = 0;
  if(*l==NULL) {
    printf("Ingresa datos : %d ", size);
    return;
    } 
  paux = *l;
  if((paux->info%2)==0){
    size = size +paux->info;
  }
  
  while(paux->next!=NULL) {
    paux = paux->next;
    if((paux->info%2)==0){
    size = size +paux->info;}
   }
   printf("Tamaño de la lista : %d ", size);}


void printMiddle(LISTA **l)
{
    LISTA *paux=*l;
    LISTA *qaux=*l;
 
    if (*l!=NULL)
    {
        while (qaux != NULL && qaux->next != NULL)
        {
            qaux = qaux->next->next;
            paux = paux->next;
        }
        printf("El elemento es la mitad es %d\n", paux->info);
    }
}

bool search(LISTA **l, int x)
{
  LISTA *paux=*l;
    // Base case
  if (*l == NULL)
    return false;
 
    // If key is present in current node, return true
  if (paux->info == x){
    return true;
  }
    
    // Recur for remaining list
  return search(&paux->next, x);
}


int getCount(LISTA **l)
{
    LISTA *paux=*l;
    // Base Case
    if (*l == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        return 1 + getCount(&paux->next);
    }
}