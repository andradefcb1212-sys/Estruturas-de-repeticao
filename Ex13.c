#include <stdio.h>

int main() {
    int n, a = 1, b = 1, c = 1, d = 1, proximo;

    printf("Digite o numero de termos: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i <= 4) {
            printf("%d ", 1);
        } else {
            proximo = a + b + c;
            printf("%d ", proximo);
            a = b;
            b = c;
            c = proximo;
        }
    }
    printf("\n");

    return 0;
}