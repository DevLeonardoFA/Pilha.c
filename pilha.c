#include <stdio.h>
#include <stdlib.h>

typedef struct no{
int codigo;
char nome[10];
struct no*next;
struct no*back;
}no;
struct no *topo, *aux;

int limite = 10;
int cont;

void metadata()
{
    printf("---------------------------------------------------------\n");
    printf("|                 |                   |                 |\n");
    printf("| Back = %p | Codigo = %p | Next = %p |\n", topo -> back ,topo -> codigo, topo ->next);
    printf("|                 |                   |                 |\n");
    printf("---------------------------------------------------------");
}

int Push(no**lista){
    if(topo == NULL){
        topo = (no*)malloc(sizeof(no));
        topo -> next = NULL;
        topo -> back = NULL;
        cont++;
        metadata();
    }
    else{
        if(cont > limite){
            printf("não vai add mais nada");
            system("pause");
        }
        else{
            topo = (no*)malloc(sizeof(no));
            aux -> next = topo;
            topo -> next = NULL;
            topo -> back = aux;
            aux = topo;
            cont++;
            metadata();
        }
    }
}

int main(){
    topo = NULL;
    aux = NULL;

    Push(topo);
}
