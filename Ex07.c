//Fazer um programa que leia um conjunto de alturas de pessoas. O final do conjunto de valores
//é conhecido através do valor zero. Escreva a menor altura deste conjunto.

#include <stdio.h>

int main(){
    float altura, menor_altura;
    //Entrada de dados
    printf("Insira a sua altura (0 - Encerrar): \n");
    scanf("%f", &altura);
    //Processamento do valor de entrada
    if(altura == 0){
        printf("Nenhuma altura foi inserida!\n");
    } else {
        //Processamento
        menor_altura = altura;
    }
    while(altura != 0){
        if(altura < menor_altura){
            menor_altura = altura;
        }
        //Saída caso os valores não obedeçam a condição
        printf("Insira outra altura: \n");
        scanf("%f", &altura);
    }
    //Saída caso o programa seja executado corretamente
    printf("A menor altura informada foi: %.2f\n", menor_altura);
    
    return 0;
}
