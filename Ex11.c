#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n, fatorial = 1, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fatorial *= i;
    }
    printf("O fatorial de %d é: %d\n", n, fatorial);

}