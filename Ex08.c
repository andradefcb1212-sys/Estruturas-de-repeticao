#include <stdio.h>

int main(){
    float altura = 1;
    float media_mulheres = 0, acc = 0;
    char sexo;
    int contador = 0;
    
    while(altura > 0){
        printf("Insira a sua altura (ou 0 para encerrar): \n");
        scanf("%f", &altura);
        
        if(altura <= 0){
            break;
        }
        
        printf("Insira o seu sexo (M - Masculino, F - Feminino): \n");
        scanf(" %c", &sexo);
        
        if(sexo == 'F' || sexo == 'f'){
            contador += 1;
            acc += altura;
        }
    }
    
    if(contador > 0){
        media_mulheres = acc / contador;
        printf("A media de altura das mulheres e igual a: %.2f\n", media_mulheres);
    } else {
        printf("Nenhuma altura de mulher foi registrada.\n");
    }

    return 0;
}