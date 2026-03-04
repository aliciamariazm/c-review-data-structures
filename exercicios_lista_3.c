#include <stdio.h>
#include <stdlib.h>
#include "declaracao_de_funcoes_lista_3.h"

void executar_lista_3(){
    int escolha_do_exercicio;
    do{
        printf("============= EXERCICIOS VETORES | ESTRUTURA DE DADOS ==============\n");
        printf("--> Escolha o ID do exercício\n> ");
        scanf("%d", &escolha_do_exercicio);

        switch(escolha_do_exercicio){
            case 1:
                system("cls");
                printf("============= EX 1 | EXERCICIOS VETORES ==============\n");
                executar_ex_1_L3();
                printf("\n> Seu código foi executado com sucesso. ");
                system("pause");
                break;
            
            case 0:
                break;

            default:
                printf("Opção inválida. ");
                system("pause");
                system("cls");
                break;
        }

    } while(escolha_do_exercicio != 0);
    
}

// REFATORAR! - feito
void executar_ex_1_L3(){
    int sequencia_de_numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, aux[10]; 

    for(int i = 0, j = 9; i < 10; i++, j--){
        aux[i] = sequencia_de_numeros[j];
    }

    printf("| RESULTADO: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", aux[i]);
    }

}