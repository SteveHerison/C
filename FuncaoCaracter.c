#include <stdio.h>
#include <ctype.h> // Para usar a função tolower()

int main() {
    char texto[] = "Programacao123";
    int i = 0;


    //Percorrerndo cada caractere da string
    while (texto[i]) {
        //Verificando se é uma letra
        if(islpha(texto[i])) {
         printf("%c -> Letra\n", texto[i]);

         //transformando em maiúscula se for minúscula
         if (islower(texto[i])) {
            texto[i] = toupper(texto[i]);
             printf("Convertido para maiusculo: %c\n", texto[i]);
         }
        }
        //Verificando se é um número
        else if(isdigit(texto[i])) {
            printf("%c -> Número\n", texto[i]);
        }
        i++;
    }

    printf("Texto final: %s\n", texto);

    
    return 0;
}