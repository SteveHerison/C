#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Define o local para UTF-8 ou sistema operacional

    //Declara uma variável para armazenar o número
    int numero;

    //Pede ao usuário para digitar um número
    printf("Digite um número inteiro: ");

    //Lê o número digitado pelo usuário
    scanf("%d", &numero);

    //Exibe o número digitado pelo usuário
    printf("Você digitou o número %d\n", numero);

    return 0;
}
