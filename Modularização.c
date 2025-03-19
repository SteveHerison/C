#include <stdio.h>
#include <stdlib.h>

//Função para calcular o valor do desconto
float calcularDesconto(float preco, float percentual) {
    return preco * (percentual / 100);
}

//Procedimento para exibir o valor total com desconto
void exibirTotal(float preco, float desconto) {
    float total = preco - desconto;
    printf("Total com desconto: R$ %.2f\n", total);
}

int main() {
    float preco, percentualDesconto, desconto;

    printf("Digite o preco do produto: ");  
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto); 

    // Validação básica
    if (preco < 0 || percentualDesconto < 0 || percentualDesconto > 100) {
        printf("Erro: Digite valores válidos (preco positivo e desconto entre 0 e 100).\n");
        return 1;
    }

    desconto = calcularDesconto(preco, percentualDesconto);
    exibirTotal(preco, desconto);

    return 0;
}
