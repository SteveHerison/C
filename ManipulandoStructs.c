#include <string.h>
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};

int main( ) {
    struct Paciente pacientes[3];
    int i;

    //Preenchendo os dados dos pacientes

    strcpy(pacientes[0].nome,"Pipo");
    pacientes[0].idade = 43; 
    strcpy(pacientes[0].telefone, "9999-9999");


    strcpy(pacientes[1].nome,"Amanda");
    pacientes[1].idade = 25;
    strcpy(pacientes[1].telefone, "9999-9999");


    strcpy(pacientes[2].nome,"Aurora");
    pacientes[2].idade = 18;
    strcpy(pacientes[2].telefone, "9999-9999");

    for (i = 0; i < 3; i++) {
        printf("Paciente %d:\n", i+1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Telefone: %s\n\n", pacientes[i].telefone);
    }

    return 0;
}  