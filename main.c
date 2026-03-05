#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "declaracao_de_funcoes_lista_1.h"
#include "declaracao_de_funcoes_lista_3.h"
#include "declaracao_de_funcoes_lista_5.h"
#include "declaracao_de_funcoes_lista_6.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    int escolha_da_lista;

    do{
        system("cls");
        printf("============= REVISÃO PROG I/II | ESTRUTURA DE DADOS ==============\n");
        printf("--> Escolha a lista que deseja testar\n> ");
        scanf("%d", &escolha_da_lista);

        switch(escolha_da_lista){
            case 1:
                system("cls");
                executar_lista_1();
                break;
            case 3:
                system("cls");
                executar_lista_3();
                break;
            
            case 5:
                system("cls");
                executar_lista_5();
                break;
            
            case 6:
                system("cls");
                executar_lista_6();
                break;

            default:
                printf("Opção inválida. ");
                system("pause");
                system("cls");
                break;

        }

    } while(escolha_da_lista != 0);

    
}
