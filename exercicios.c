#include <stdio.h>
#include <stdlib.h>
#include "declaracao_de_funcoes.h"

void executar_ex_1(Usuario *usuario_atual){
    printf("-> Insira a sua cidade natal: ");
    scanf(" %[^\n]", usuario_atual->cidade_natal);
    printf("\n| Sua cidade natal é: %s", usuario_atual->cidade_natal);
}


void executar_ex_2(Usuario *usuario_atual){
    printf("-> Insira o seu nome: ");
    scanf(" %[^\n]", usuario_atual->nome);

    fflush(stdin);

    printf("-> Insira a sua idade: ");
    scanf("%d", &usuario_atual->idade);

    printf("-> Insira a sua altura: ");
    scanf("%f", &usuario_atual->altura);

    printf("\n| Dados inseridos:\n| %s\n| %d\n| %.2f\n", usuario_atual->nome, usuario_atual->idade, usuario_atual->altura);
}

void executar_ex_3(){
    float imprimir_numero = 75.7632489;
    printf("| Com uma casa decimal: %.1f\n", imprimir_numero);
    printf("| Com duas casas decimais: %.2f\n", imprimir_numero);
    printf("| Com uma casa decimal: %.5f", imprimir_numero);
}

void executar_ex_4(Usuario *usuario_atual){
    printf("-> Digite a sua altura: ");
    scanf("%f", &usuario_atual->altura);
    printf("\n| A sua altura é %.2f", usuario_atual->altura);
}

void executar_ex_5(Usuario *usuario_atual){
    Usuario pessoa_1;
    Usuario pessoa_2;

    printf("-> Digite o seu peso: ");
    scanf("%f", &usuario_atual->peso);
    
    printf("-> Digite o peso de uma pessoa qualquer: ");
    scanf("%f", &pessoa_1.peso);

    printf("-> Digite o peso de outra pessoa: ");
    scanf("%f", &pessoa_2.peso);

    printf("\n| Seu peso: %.2f\n| Peso da Pessoa 1: %.2f\n| Peso da Pessoa 2: %.2f", usuario_atual->peso, pessoa_1.peso, pessoa_2.peso);
}

void executar_ex_6(){
    float raio_do_circulo, resultado_da_area;
    float const PI = 3.14;
    
    printf("-> Insira o valor do raio do círculo: ");
    scanf("%f", &raio_do_circulo);

    resultado_da_area = PI*raio_do_circulo*raio_do_circulo;

    printf("\n| A área do círculo é: %.2f", resultado_da_area);
}

//Planos futuros: tentar fazer webscrapping em C (libcurl)
void executar_ex_7(){
    float const COTACAO_DOLAR = 5.125;
    float dinheiro_dolar, conversao_para_real;

    printf("-> Insira o valor em dólar: US$");
    scanf("%f", &dinheiro_dolar);

    conversao_para_real = dinheiro_dolar*COTACAO_DOLAR;

    printf("\n| US$%.2f é equivalente a R$%.2f.", dinheiro_dolar, conversao_para_real);
}

void executar_ex_8(){
    int escolha_do_exercicio_8;
    printf("--> Escolha o ID do sub-exercício\n> ");
    scanf("%d", &escolha_do_exercicio_8);
    switch(escolha_do_exercicio_8){
        case 1:
            system("cls");
            printf("============= EX 8->1 | PRIMEIRA LISTA ==============\n");
            executar_ex_8_1();
            printf("\n\n> Seu código foi executado com sucesso.");                
            break;
        
        case 5:
            system("cls");
            printf("============= EX 8->1 | PRIMEIRA LISTA ==============\n");
            executar_ex_8_5();
            printf("\n\n> Seu código foi executado com sucesso.");                
            break;
        //case 7:
        //case 8:
            }
}

void executar_ex_8_1(){
    float valor_bruto_de_vendas, valor_de_vendas_com_desconto, valor_de_vendas_parcelado, comissao_a_vista, comissao_parcelada;
    printf("-> Insira o valor total em vendas: R$");
    scanf("%f", &valor_bruto_de_vendas);
    
    valor_de_vendas_com_desconto = valor_bruto_de_vendas*0.9;
    valor_de_vendas_parcelado = valor_bruto_de_vendas/3;
    comissao_a_vista = valor_de_vendas_com_desconto*0.05;
    comissao_parcelada = valor_bruto_de_vendas*0.05;

    printf("\n| INFORMAÇÕES DO VENDEDOR\n");
    printf("| Total de vendas: R$%.2f\n", valor_bruto_de_vendas);
    printf("| Total de vendas com 10%% de desconto: R$%.2f\n", valor_de_vendas_com_desconto);
    printf("| Valor da parcela (3x sem juros): R$%.2f\n", valor_de_vendas_parcelado);
    printf("| Comissão à vista: R$%.2f\n", comissao_a_vista);
    printf("| Comissao por vendas parceladas: R$%.2f", comissao_parcelada);
}

void executar_ex_8_5(){
    int a, b, aux;

    printf("-> Insira o valor de A: ");
    scanf("%d", &a);
    printf("\n-> Insira o valor de B: ");
    scanf("%d", &b);

    printf("\n| VERSÃO ORIGINAL\n| A: %d\n| B: %d\n\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("| VERSÃO TROCADA\n| A: %d\n| B: %d\n\n", a, b);
}