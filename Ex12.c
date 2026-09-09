#include <stdio.h>

int main() {
    int n, a = 1, b = 1, c;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    
    if (n != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}