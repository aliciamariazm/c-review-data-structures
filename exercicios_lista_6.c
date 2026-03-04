#include <stdio.h>
#include <stdlib.h>
#include "declaracao_de_funcoes_lista_6.h"

void executar_lista_6(){
    int escolha_do_exercicio;
    do{
        printf("============= EXERCICIOS RECURSIVIDADE 1 | ESTRUTURA DE DADOS ==============\n");
        printf("--> Escolha o ID do exercício\n> ");
        scanf("%d", &escolha_do_exercicio);

        switch(escolha_do_exercicio){
            case 1:
                system("cls");
                printf("============= EX 1 | EXERCICIOS RECURSIVIDADE 1 ==============\n");
                executar_ex_1_L6();
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
void executar_ex_1_L6(){
    int x = 1, fat = 1, n = 10;

    //LOOP:
    while(x <= n){
        fat = fat*x++;
        printf("%d\n", fat);
    }
    
    //RECURSIVIDADE:
    // printf("%d", fatorial(n));
}

// int fatorial(int x){
//     if(x==1) return 1;
//     return fatorial(x-1)*x;
// }