#include <stdio.h>

int main(){
    float nota;
    int cont = 0, lim = 5;
    int aprovados = 0;
    
    //Processamento
    for(cont = 0; cont < lim;){
        if(nota > 10){
            //Entrada de dados
            printf("Insira uma nota válida: \n");
            scanf("%f", &nota);
        } else {
            printf("Insira a sua nota: \n");
            scanf("%f", &nota);
            //Processamento
            cont++;
            if(nota >= 6){
                aprovados += 1;
            }
        }
    }
    
    //Saída de dados
    printf("O total de alunos aprovados é: %d", aprovados);
    return 0;
}