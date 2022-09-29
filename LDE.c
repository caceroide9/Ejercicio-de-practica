#include <stdio.h>
#include <stdlib.h>

typedef struct pnodod{
int info;
struct pnodod *next;
struct pnodod *prev;
}LISTAD;

void crea_ld(LISTAD **ld);
int vacia(LISTAD **ld);
void ins_ini_ld(LISTAD **ld, int v);
void ins_final_ld(LISTAD **ld, int v);
void ins_despues_ld(LISTAD **ld, int ref, int v);
void eliminar_inicio(LISTAD**ld);
void eliminar_final(LISTAD **ld);
void escribir_ld(LISTAD **ld, char s);
void insertatbegin(LISTAD **ld,int k);
void insertatpos(LISTAD **ld,int k, int pos);
void eliminarpos(LISTAD **ld, int pos);
void reverseList(LISTAD **ld);
void bubbleSort(LISTAD **ld);
void swap(LISTAD *a, LISTAD *b);

int main() {
  LISTAD *ld;
  int v,ref,opcion;
  char s;
  int k,pos;
  crea_ld(&ld);
  do{
    printf("\n1. Insertar al inicio\n");
    printf("2. Insertar al final \n");
    printf("3. Insertar antes de un numero\n");
    printf("4. Insertar despues de un numero\n");
    printf("5. Eliminar al inicio\n");
    printf("6. Eliminar al final\n");
    printf("7. Escribir lista\n");
    printf("8. Ingresar en una elemento en una posicion\n");
    printf("9. Eliminar en una posicion\n");
    printf("10. Invertir lista\n");
    printf("11. Ordenar lista\n");
    printf("12. Salir del programa\n\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);
    switch (opcion){
      case 1:
        printf("Ingrese el valor a insertar: ");
        scanf("%d",&v);
        ins_ini_ld(&ld, v);
        break;
      case 2:
        printf("Ingrese el valor a insertar: ");
        scanf("%d",&v);
        ins_final_ld(&ld, v);
        break;
      case 3:
        break;
      case 4:
        printf("Ingrese el valor a insertar: ");
        scanf("%d",&v);
        printf("Ingrese despues de que valor: ");
        scanf("%d",&ref);
        ins_despues_ld(&ld, ref, v);
        break;
      case 5:
        eliminar_inicio(&ld);
        break;
      case 6:
        eliminar_final(&ld);
        break;
      case 7:
        escribir_ld(&ld, s);
        break;
      case 8:
        printf("Ingrese valor");
        scanf("%d",&k);
        printf("Ingrese valor");
        scanf("%d",&pos);
        insertatpos(&ld, k,  pos);
        break;
      case 9:
        printf("Ingrese valor");
        scanf("%d",&pos);
        eliminarpos(&ld, pos);
        break;
      case 10:
        reverseList(&ld);
        break;
      
      case 11:
        bubbleSort(&ld);
        break;
      }
    }
    while (opcion != 12);
  return 0;
}

void crea_ld(LISTAD **ld){
  *ld=NULL;
}

int vacia(LISTAD **ld){
  return (*ld==NULL);
}

void ins_ini_ld(LISTAD **ld, int v){
  LISTAD *paux;
  paux=(LISTAD*)malloc(sizeof(LISTAD));
  paux->info=v;
  paux->next=NULL;
  paux->prev=NULL;

  if(*ld==NULL) //lista vacia)
  {
    paux->next=*ld;
    *ld=paux;
  }
  else{
    paux->next=*ld;
    (*ld)->prev=paux;
    // paux->prev=paux;
    *ld=paux;
  }
}

void ins_final_ld(LISTAD **ld,int v){
  LISTAD *paux, *qaux;
  paux=(LISTAD*)malloc(sizeof(LISTAD));
  paux->info=v;
  paux->next=NULL;
  paux->prev=NULL; //ACA
  if(*ld==NULL)
    *ld=paux;
  else{
    qaux=*ld;
    while(qaux->next!=NULL){
      qaux=qaux->next;}
    qaux->next=paux;
    paux->prev=qaux; //ACA
  }
}

void ins_despues_ld(LISTAD **ld, int ref, int v){
  LISTAD *paux, *qaux, *raux;
  qaux=*ld;
  while((qaux->next!=NULL) && (qaux->info!=ref)){
    qaux=qaux->next;
    raux=qaux->next;
  }
  paux=(LISTAD*)malloc(sizeof(LISTAD));
  paux->info=v;
  if(qaux==NULL){
    paux->next=qaux->next;
    qaux->next=paux;
    paux->prev=qaux;
  }
  else{
    paux->next=qaux->next;
    paux->prev=qaux;
    raux->prev=paux;
    qaux->next=paux;
  }
}

void eliminar_inicio(LISTAD**ld){
  LISTAD *paux;
  paux=*ld;
  *ld=paux->next;
  free(paux);
}

void eliminar_final(LISTAD **ld){
	LISTAD *paux,*qaux;
	qaux=*ld;
	if (qaux->next == NULL){
		paux->next=*ld;
		*ld=NULL;
    }
  else{
    while(qaux->next->next!=NULL){
      qaux=qaux->next;}
    paux=qaux->next;
    qaux->next=NULL;
    }
  free(paux);
}

void escribir_ld(LISTAD **ld, char s){
  LISTAD *paux, *qaux;
  paux=*ld;
  if(s=='a') //se escribe de izq a derecha
    while (paux!=NULL){
      printf("%d\t", paux->info);
      paux=paux->next;
    }
  else{
    qaux=*ld;
    while(qaux->next!=NULL)
      qaux=qaux->next;
    while(qaux!=NULL){
      printf("%d\t", qaux->info);
      qaux=qaux->prev;
      }
  }
}

void insertatpos(LISTAD **ld,int k, int pos){
        int i;
        LISTAD* src = *ld;
 
        while (pos--) {
            src = src->next;
        }
 
        LISTAD **da, **ba;
        LISTAD* ptr= (LISTAD*)malloc(sizeof(LISTAD));
        ptr->next = NULL;
        ptr->prev = NULL;
        ptr->info = k;

        ba = &src;
        da = &(src->prev);
        ptr->next = (*ba);
        ptr->prev = (*da);
        (*da)->next = ptr;
        (*ba)->prev = ptr;
        i++;
  }

void eliminarpos(LISTAD **ld, int pos){
        int i;
        LISTAD* src = *ld;
        pos--;
 
        // Traverse node till pos
        while (pos--) {
            src = src->next;
        }
 
        // previous and after node
        // of the src node
        LISTAD **pre, **aft;
        pre = &(src->prev);
        aft = &(src->next);
 
        // Change the next and prev
        // pointer of pre and aft node
        (*pre)->next = (*aft);
        (*aft)->prev = (*pre);
 
        // Decrease the length of the
        // Linked List
        i--;
}

void reverseList(LISTAD **ld)
{
  LISTAD *paux=*ld;
  LISTAD *qaux=*ld;
 
  // Traverse the list and set right pointer to
  // end of list
  while (qaux->next != NULL) {
    qaux = qaux->next;
  }
 
  // Swap data of left and right pointer and move
  // them towards each other until they meet or
  // cross each other
  while (paux != qaux && paux->prev != qaux) {
 
    // Swap data of left and right pointer
    int temp = paux->info;
    paux->info = qaux->info;
    qaux->info = temp;
 
    // Advance left pointer
    paux = paux->next;
 
    // Advance right pointer
    qaux = qaux->prev;
  }
}

void bubbleSort(LISTAD **ld)
{
    int swapp, i;
    LISTAD *paux;
    LISTAD *qaux=NULL;
    if (*ld == NULL)
        return;
    do
    {
        swapp = 0;
        paux = *ld;
        while (paux->next != qaux)
        {
            if (paux->info > paux->next->info)
            {
                swap(&paux->info, &paux->next->info);
                swapp = 1;
            }
            paux = paux->next;
        }
        qaux = paux;
    }
    while (swapp);
}

void swap(LISTAD *a, LISTAD *b) 
{ 
    int temp = a->info; 
    a->info = b->info; 
    b->info = temp; 
}