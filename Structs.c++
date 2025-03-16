#include <string.h>
#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char telefone[15];
};

int main() {
    struct Pessoa lista[3]; 
    int i;
    
    //Preenchendo as inform  ações para cada pessoa
    strcpy(lista[0].nome, "João");
    lista[0].idade = 18;
    strcpy(lista[0].telefone, "9999-9999");


    strcpy(lista[1].nome, "Lucass");
    lista[1].idade = 14;
    strcpy(lista[1].telefone, "9999-9999");


    strcpy(lista[2].nome, "Amanda");
    lista[2].idade = 8;
    strcpy(lista[2].telefone, "9999-9999");



    //Imprimindo as informações
    for (i = 0; i < 3; i++) {
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Telefone: %s\n\n", lista[i].telefone);
    }


    return 0;
}

