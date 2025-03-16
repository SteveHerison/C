#include <stdio.h>
#include <string.h>

#define NUM_PRODUTOS 5

struct Produto {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main() {
    int i;
    struct Produto produtos[NUM_PRODUTOS];

    //Preenchendo os dados dos produtos

    strcpy(produtos[0].nome, "Camiseta");
    produtos[0].codigo = 1001;  
    produtos[0].quantidade = 50;
    produtos[0].preco = 29.90;

    strcpy(produtos[1].nome, "Calça Jeans");
    produtos[1].codigo = 1002;
    produtos[1].quantidade = 30;
    produtos[1].preco = 89.90;

printf("=== Estoque de Produtos ===\n");
for (i = 0; i < NUM_PRODUTOS; i++) {
    printf("Nome: %s\n", produtos[i].nome);
    printf("Código: %d\n", produtos[i].codigo);
    printf("Quantidade: %d\n", produtos[i].quantidade);
    printf("Preço: %.2f\n", produtos[i].preco);
    printf("\n");
}
return 0;
}
