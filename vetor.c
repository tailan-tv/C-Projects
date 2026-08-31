#include <stdio.h>
#include <string.h>
#define max 100

typedef struct{
    char nome[20];
    int id;
} pessoa;

void print(pessoa *pessoas, int cont);
void entrada(pessoa *pessoas, int *cont);
void options(pessoa *pessoas, int *cont);

int main(){
    pessoa pessoas[max];
    int cont = 0;
    
    options(pessoas, &cont);
    
    return 0;
}
void options(pessoa *pessoas, int *cont){
    int choice;
    
    printf("\n1 - Cadastrar\n2 - Exibir\n3 - Lista\n\n");
    fflush(stdin);
    scanf("%i", &choice);
    
    switch (choice){
        case 1:
            entrada(pessoas, cont);
            choice = 0;
            break;
            
        case 2: 
            print(pessoas, *cont);
            choice = 0;
            break;
        }
}
    
void entrada(pessoa *pessoas, int *cont){
  
    printf("\nNome: ");
    fflush(stdin);
    scanf("%s", pessoas[*cont].nome);
    
    printf("ID: ");
    fflush(stdin);
    scanf("%i", &pessoas[*cont].id);
    
    (*cont)++;
    options(pessoas, cont);
    
}
void print(pessoa *pessoas, int cont){
    
    for (int i = 0; i  < cont; i++){
       printf ("\nNome: %s\nId: %i\n", pessoas[i].nome, pessoas[i].id);
    }
}