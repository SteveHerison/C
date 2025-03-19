#include <stdio.h>
#include <stdlib.h> // Para usar a função exit()


FILE* abrirArquivo(const char *nomeArquivo, const char *modo) {
    FILE *arquivo = fopen(nomeArquivo, modo);
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    return arquivo;
}


int main() {
    FILE *arquivo; //Ponteiro para o arquivo
    char nome[50];
    int idade;


    // //Abrindo o arquivo no modo "W" para escrta
    // arquivo = fopen("dados.txt", "w");
    // if(arquivo == NULL) {
    //     printf("Erro ao abrir o arquivo!\n");
    //     return 1;
    // }


    // Abrindo arquivo para escrita usando a função
    arquivo = abrirArquivo("dados.txt", "w");
    

    // Coletando dados do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);


    //Gravando os dados no arquivo 
    fprintf(arquivo, "Nome: %s\nIdade: %d\n", nome, idade);

    //Fechando o arquivo
    fclose(arquivo);

    // //Reabrindo o arquivo no modo "r" para leitura
    // arquivo = fopen("dados.txt", "r");
    // if(arquivo == NULL) {
    //     printf("Erro ao abrir o arquivo!\n");
    //     return 1;
    // }


    // Abrindo arquivo para leitura usando a função
    arquivo = abrirArquivo("dados.txt", "r");


    //Lendo os dados do arquivo 
    fscanf(arquivo, "Nome: %s\nIdade: %d\n", nome, &idade);
    printf("Lido do arquivo -> Nome: %s | Idade: %d\n", nome, idade);
  
    fclose(arquivo);
  
    return 0;
  
}