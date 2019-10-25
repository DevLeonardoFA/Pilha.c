#include <stdio.h>
#include <stdlib.h>

typedef struct no{
int codigo;
char nome[10];
struct no*next;
struct no*back;
}no;
struct no *top, *aux, *t;

int limite = 10;
int cont, cont2;

void teste(){
    int resposta;
    do{
        printf("\n\n [0] - Add \n [1] - Remove \n [2] - View top \n [3] - View All \n\n digitado: ");
        scanf("%d", &resposta);
        printf("\n");

        switch(resposta){
        case 0:
            Push(top);
            break;
        case 1:
            Pop(top);
            break;
        case 2:
            Top(top);
            break;
        case 3:
            TopAll(top);
            break;
        default:
            printf("Em construcao\n");
            system("pause");
            break;
        }
    }while(resposta != 4);
}

void metadata(){
    printf("\n--------------------------------------------------------------------\n");
    printf("|                 |                              |                 |\n");
    printf("| Back = %p | Espaco de memoria = %p | Next = %p |\n", top -> back ,top, top ->next);
    printf("|                 |                              |                 |\n");
    printf("--------------------------------------------------------------------\n");
    printf("|                                                                  |\n");
    printf("  Codigo = %d   Nome =  %s \n", top->codigo, top->nome);
    printf("|                                                                  |\n");
    printf("--------------------------------------------------------------------\n\n\n");
}

void add(){
     printf("\n Digite um codigo: ");
     scanf("%d",&top->codigo);
     printf("\n Digite um nome: ");
     scanf("%s",&top->nome);
     }

int Push(no**lista){
    if(top == NULL){
        top = (no*)malloc(sizeof(no));
        top -> next = NULL;
        top -> back = NULL;
        aux = top;
        cont++;
        add();
        metadata();
    }
    else{
        if(cont > limite){
            printf("nao vai add mais nada\n\n");
        }
        else{
            top = (no*)malloc(sizeof(no));
            aux -> next = top;
            top -> next = NULL;
            top -> back = aux;
            aux = top;
            cont++;
            add();
            metadata();
        }
    }
}

int Pop(no**lista){
    if(top==NULL){
        printf("Pilha vazia");
        system("pause");
    }
    else{
        if(top -> back == NULL || top -> next == NULL){
            aux = NULL;
            free(top);
            cont = 0;
            printf("removido o ultimo elemento");
            system("pause");
            top = NULL;
        }
        else{
            top = top -> back;
            top -> next = NULL;
            free(aux);
            printf("Removido elemento na pilha");
            system("pause");
            cont--;
            aux = top;
        }
    }
}

int Top(no**lista){
    if(top==NULL){
        printf("nao tem elementos na pilha\n\n");
    }
    else{
        metadata();
    }
}

int TopAll(no**lista){
    if(top==NULL){
        printf("nao tem elementos na pilha\n\n");
    }
    else{
    t = top;
        if(cont > 0){
            for(int i = cont; i > 0; i--){
                metadata();
                top = top -> back;
                aux = top;
                cont2++;
                cont--;
            }
        }
    }
    cont = cont2;
    top = t;
    aux = top;
}


int main(){
    top = NULL;
    aux = NULL;
    cont = 0;

    teste();
}
