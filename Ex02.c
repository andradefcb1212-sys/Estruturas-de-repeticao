#include <stdio.h>

int main(){
    int start;
    int cont = 1, lim = 100;
    double acm = 1;
    
    printf("Insira o número '1' para iniciar o programa: \n");
    scanf("%d", &start);
    if(start != 1){
        printf("Programa finalizado.\n");
    }else{
        for(cont = 1; cont <= lim; cont++){
        printf("Contador: %d\n", cont);
        acm *= cont;
    }
    printf("O produto dos elementos de 1 a 100 é igual a: %.0lf\n", acm);
    }
    return 0;
}