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
            
            case 2:
                system("cls");
                printf("============= EX 2 | EXERCICIOS VETORES ==============\n");
                executar_ex_2_L3();
                printf("\n> Seu código foi executado com sucesso. ");
                system("pause");
                break;

            case 3:
                system("cls");
                printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
                executar_ex_3_L3();
                printf("\n> Seu código foi executado com sucesso. ");
                system("pause");
                system("cls");
                break;
            
            case 4:
                system("cls");
                printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
                executar_ex_4_L3();
                printf("\n> Seu código foi executado com sucesso. ");
                system("pause");
                system("cls");
                break;

            // case 5:
            //     system("cls");
            //     printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
            //     executar_ex_5_L3();
            //     printf("\n> Seu código foi executado com sucesso. ");
            //     system("pause");
            //     system("cls");
            //     break;

            // case 6:
            //     system("cls");
            //     printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
            //     executar_ex_6_L3();
            //     printf("\n> Seu código foi executado com sucesso. ");
            //     system("pause");
            //     system("cls");
            //     break;

            // case 7:
            //     system("cls");
            //     printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
            //     executar_ex_7_L3();
            //     printf("\n> Seu código foi executado com sucesso. ");
            //     system("pause");
            //     system("cls");
            //     break;

            // case 8:
            //     system("cls");
            //     printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
            //     executar_ex_8_L3();
            //     printf("\n> Seu código foi executado com sucesso. ");
            //     system("pause");
            //     system("cls");
            //     break;

            // case 9:
            //     system("cls");
            //     printf("============= EX 3 | EXERCICIOS VETORES ==============\n");
            //     executar_ex_9_L3();
            //     printf("\n> Seu código foi executado com sucesso. ");
            //     system("pause");
            //     system("cls");
            //     break;

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

void executar_ex_2_L3(){
    int matriz[5][2], vetor[10], qtd_espacos_no_vetor = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            printf("-> Insira o número da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            vetor[qtd_espacos_no_vetor] = matriz[i][j];
            qtd_espacos_no_vetor++;
        }
    }

    printf("\n| Vetor preenchido: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    } 

    printf("\n| Estrutura da Matriz:");
    
    for(int i = 0; i < 5; i++){
        printf("\n");
        for(int j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
    }
}

void executar_ex_3_L3(){
    int matriculas[10], aux, booleano = 0;

    for(int i = 0; i < 10; i++){
        do{
            booleano = 0;
            printf("\n-> Insira o %dº número de matrícula: ", i+1);
            scanf("%d", &aux);
            for(int j = 0; j < i; j++){
                if(aux == matriculas[j]){
                    booleano++;
                    printf("\nA matrícula já está cadastrada. ");
                    system("pause");
                    break;
                }                
            }

        } while(booleano > 0);
        
        matriculas[i] = aux;
    }
}

void executar_ex_4_L3(){
    int vetor_de_inteiros[100], aux[100], i = 0;

    do{
        printf("\n-> Insira um número inteiro: ");
        scanf("%d", &vetor_de_inteiros[i]);

        if(vetor_de_inteiros[i] == 999) break;
        
        i++;
    } while(i < 100);

    for(int j = 0, k = i-1; j < i; j++, k--){
        aux[j] = vetor_de_inteiros[k];
    }

    printf("| RESULTADO: ");
    for(int j = 0; j < 10; j++){
        printf("%d ", aux[j]);
    }
}