#include <stdio.h>

int main(){
    int start;
    int cont = 1, lim = 500;
    int acm = 0;
    
    printf("Insira o número '1' para começar: \n");
    scanf("%d", &start);
    
    if(start == 1){
       for(cont = 1; cont <= lim; cont++){
        if(cont % 2 == 0){
            acm += cont;
        }
    } 
    }
    printf("A soma dos números pares entre 1 e 500 é igual a: %d", acm);
    return 0;
}