#include <stdio.h>

int main(){
    int n1, n2;
    
    printf("Insira o valor 1: \n");
    scanf("%d", &n1);
    
    printf("Insira o valor 2: \n");
    scanf("%d", &n2);
    
    while (n2 <= n1){
        printf("----------------------------\n");
        printf("O valor de N2 deve ser maior que N1!!!\n");
        printf("------------------------------\n");
        printf("Insira o valor 2: \n");
        scanf("%d", &n2);
    }
    
    printf("%d < %d", n1, n2);
    return 0;
}