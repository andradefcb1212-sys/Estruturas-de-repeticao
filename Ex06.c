#include <stdio.h>

int main(){
    int idade, lim = 20, cont = 0;
    int acc = 0, media = 0;
    
    //Processamento do contador e acumulador das idades
    while(idade > 0 &&  idade != -1){
        //Entrada da idade das pessoas
        printf("Insira a sua idade: \n");
        scanf("%d", &idade);
        acc += idade;
        cont++;
    }
    //Processamento da média das idades das pessoas
    cont = cont - 1;
    media = acc/cont;
    
    //Saída da média de idade das pessoas
    printf("A média de idade das %d pessoas é igual a: %d anos.\n", cont, media);
    return 0;
}