#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Função para calcular o valor do desconto

float calcularDesconto(float preco, float percentual) {
    return preco* (percentual / 100);
}

//Procedimento para exibir o valor total com desconto

void exibirTotal(float preco, float desconto) {
    float total = preco - desconto;
    printf("Total com desconto: %.2f\n", total);
}

int main() {
    float preco, percentualDesconto, desconto;

    //Solicita o preço e o percentual de desconto ao usuário
    
    printf("Digite o preço do produto: ");  
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);

}