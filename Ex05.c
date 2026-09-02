#include <stdio.h>

int main(){
    int idade, lim = 20, cont = 0;
    int acc = 0, media = 0;
    
    while(cont < lim){
        printf("Insira a sua idade: \n");
        scanf("%d", &idade);
        acc += idade;
        cont++;
    }
    
    media = acc/cont;
    
    printf("A média de idade das pessoas é de: %d anos.\n", media);
    
    return 0;
}