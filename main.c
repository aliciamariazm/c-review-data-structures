#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "declaracao_de_funcoes.h"

int main(){
    setlocale(LC_ALL, "PT-BR");
    int escolha_do_exercicio;

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
            executar_ex_1();
            printf("\nSeu código foi executado com sucesso.");
            break;

        default:
            break;
    }
}
