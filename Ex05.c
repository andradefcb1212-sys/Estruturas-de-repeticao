#include <stdio.h>

int main(){
    int idade, lim = 20, cont = 0;
    int acc = 0, media = 0;
    
    //Processamento do contador e acumulador das idades
    while(cont < lim){
        //Entrada da idade das pessoas
        printf("Insira a sua idade: \n");
        scanf("%d", &idade);
        //Processamento do acumulador e contador das idades
        acc += idade;
        cont++;
    }
    
    media = acc/cont;
    //Saída da média de idade das pessoas
    printf("A média de idade das pessoas é de: %d anos.\n", media);
    
    return 0;
}