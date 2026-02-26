#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "declaracao_de_funcoes.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    int escolha_do_exercicio;
    Usuario usuario_atual;

    do{
        printf("============= PRIMEIRA LISTA | ESTRUTURA DE DADOS ==============\n");
        printf("--> Escolha o ID do exercício\n> ");
        scanf("%d", &escolha_do_exercicio);
        if(escolha_do_exercicio < 1 || escolha_do_exercicio > 42){
            printf("Opção inválida.\n");
            system("pause");
            system("cls");
        }
    } while(escolha_do_exercicio < 1 || escolha_do_exercicio > 42);
    
    switch(escolha_do_exercicio){
        case 1:
            system("cls");
            printf("============= EX 1 | PRIMEIRA LISTA ==============\n");
            executar_ex_1(&usuario_atual);
            printf("\n> Seu código foi executado com sucesso.");
            break;

        case 2:
            system("cls");
            printf("============= EX 2 | PRIMEIRA LISTA ==============\n");
            executar_ex_2(&usuario_atual);
            printf("\n> Seu código foi executado com sucesso.");
            break;
        
        case 3:
            system("cls");
            printf("============= EX 3 | PRIMEIRA LISTA ==============\n");
            executar_ex_3();
            printf("\n\n> Seu código foi executado com sucesso.");
            break;

        case 4:
            system("cls");
            printf("============= EX 4 | PRIMEIRA LISTA ==============\n");
            executar_ex_4(&usuario_atual);
            printf("\n\n> Seu código foi executado com sucesso.");
            break;

        case 5:
            system("cls");
            printf("============= EX 5 | PRIMEIRA LISTA ==============\n");
            executar_ex_5(&usuario_atual);
            printf("\n\n> Seu código foi executado com sucesso.");
            break;
        
        case 6:
            system("cls");
            printf("============= EX 6 | PRIMEIRA LISTA ==============\n");
            executar_ex_6();
            printf("\n\n> Seu código foi executado com sucesso.");
            break;
        case 7:
            system("cls");
            printf("============= EX 7 | PRIMEIRA LISTA ==============\n");
            executar_ex_7();
            printf("\n\n> Seu código foi executado com sucesso.");
            break;
        default:
            break;
    }
}
