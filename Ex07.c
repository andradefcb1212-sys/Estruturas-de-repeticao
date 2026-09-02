//Fazer um programa que leia um conjunto de alturas de pessoas. O final do conjunto de valores
//é conhecido através do valor zero. Escreva a menor altura deste conjunto.

#include <stdio.h>

int main(){
    float altura, menor_altura;
    printf("Insira a sua altura (0 - Encerrar): \n");
    scanf("%f", &altura);
    
    if(altura == 0){
        printf("Nenhuma altura foi inserida!\n");
    } else {
        menor_altura = altura;
    }
    while(altura != 0){
        if(altura < menor_altura){
            menor_altura = altura;
        }
        printf("Insira outra altura: \n");
        scanf("%f", &altura);
    }
    printf("A menor altura informada foi: %.2f\n", menor_altura);
    
    return 0;
}
