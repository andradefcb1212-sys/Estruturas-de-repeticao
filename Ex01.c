#include <stdio.h>

int main(){
    int start;
    int cont = 1, lim = 100, acm = 0;
    
    //Inicialização do programa
    printf("Insira o número '1' para iniciar o programa: \n");
    scanf("%d", &start);
    if(start != 1){
        printf("Programa encerrado!\n");
        return 1;

        //Inicialização do contador e do acumulador de 1 a 100
    } else {
        for(cont = 1; cont <= lim; cont++){
        printf("Contador: %d\n", cont);
        acm += cont;
    }
    //Saída dos valores do acumulador
    printf("A soma final dos elementos de 1 a 100 é igual a: %d\n", acm);
    }
    return 0;
}