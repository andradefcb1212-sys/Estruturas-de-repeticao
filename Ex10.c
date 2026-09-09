#include <stdio.h>
#include <string.h>

int main() {
    char numero[20];
    int tamanho;

    printf("Digite um numero: ");
    scanf("%s", numero);

    tamanho = strlen(numero);

    printf("Numero invertido: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", numero[i]);
    }
    printf("\n");

    return 0;
    
}