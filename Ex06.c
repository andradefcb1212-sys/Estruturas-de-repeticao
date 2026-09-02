#include <stdio.h>

int main(){
    int idade, lim = 20, cont = 0;
    int acc = 0, media = 0;
    
    while(idade > 0 &&  idade != -1){
        printf("Insira a sua idade: \n");
        scanf("%d", &idade);
        acc += idade;
        cont++;
    }
    cont = cont - 1;
    media = acc/cont;
    
    printf("A média de idade das %d pessoas é igual a: %d anos.\n", cont, media);
    return 0;
}