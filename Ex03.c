#include <stdio.h>

int main(){
    int start;
    int cont = 1, lim = 500;
    int acm = 0;
    
    //Inicialização
    printf("Insira o número '1' para começar: \n");
    scanf("%d", &start);
    
    //Processamento do contador e acumulador dos números pares de 1 a 500
    if(start == 1){
       for(cont = 1; cont <= lim; cont++){
        if(cont % 2 == 0){
            acm += cont;
        }
    } 
    }
    //Saída do valor do acumulador
    printf("A soma dos números pares entre 1 e 500 é igual a: %d", acm);
    return 0;
}