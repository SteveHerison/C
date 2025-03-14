#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    //Definição de variáveis do tipo ponteiro
    int numero = 10;
    int *ponteiroInt = &numero;

    //Exibindo o valor e o endereço da variavel "numero" usando ponteiro
    printf("O valor de numero é %d\n", numero);
    printf("Endereço de numero %p\n", ponteiroInt);
    printf("O valor apontado por ponteiroInt é %d\n", *ponteiroInt);

    // Alterando o valor da variável "numero" através do ponteiro
    *ponteiroInt = 20;
    printf("Novo valor de numero após modificação pelo ponteiro: %d\n", numero);

    // Características específicas dos ponteiros
    // Alocação dinâmica de memória com malloc
    int *ponteiroDinamico;
    ponteiroDinamico = (int *) malloc(sizeof(int));

    if (ponteiroDinamico == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;  // Sair do programa se a alocação falhar
    }

    // Inicializando o valor alocado dinamicamente e exibindo
    *ponteiroDinamico = 50;
    printf("Valor armazenado na memória alocada dinamicamente: %d\n", *ponteiroDinamico);

    // Uso correto dos ponteiros na programação 
    // Exemplo de uso seguro de ponteiro com verificação e liberação de memória
    free(ponteiroDinamico);
    ponteiroDinamico = NULL;

    // Testando o ponteiro após liberar a memória
    if (ponteiroDinamico == NULL) {
        printf("A memória foi liberada com sucesso! E o ponteiro foi invalidado.\n");
    }

    return 0;
}