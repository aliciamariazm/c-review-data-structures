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

    switch(escolha_do_exercicio_8){ //Lembrar de refatorar o menu
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
        
        case 6:
            system("cls");
            printf("============= EX 8->6 | PRIMEIRA LISTA ==============\n");
            executar_ex_8_6();
            printf("\n\n> Seu código foi executado com sucesso.");               
            break;
        
        case 7:
            system("cls");
            printf("============= EX 8->7 | PRIMEIRA LISTA ==============\n");
            executar_ex_8_7();
            printf("\n\n> Seu código foi executado com sucesso.");             
            break;
        
        case 8:
            system("cls");
            printf("============= EX 8->8 | PRIMEIRA LISTA ==============\n");
            executar_ex_8_8();
            printf("\n\n> Seu código foi executado com sucesso.");             
            break;
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

void executar_ex_8_6(){
    int numero_4_digitos, aux;

    printf("-> Insira um número inteiro de 4 dígitos: ");
    scanf("%d", &numero_4_digitos);
    printf("\n| RESULTADO:\n");

    aux = numero_4_digitos/1000; 

    printf("| %d\n", aux);

    aux *= 1000;
    aux = numero_4_digitos - aux;
    numero_4_digitos = aux;
    aux = numero_4_digitos/100;
    
    printf("| %d\n", aux);
    
    aux *= 100;
    aux = numero_4_digitos - aux;
    numero_4_digitos = aux;
    aux = numero_4_digitos/10;
    
    printf("| %d\n", aux);
    
    aux *= 10;
    aux = numero_4_digitos - aux;
    
    printf("| %d\n", aux);

}

void executar_ex_8_7(){
    int tempo_em_segundos, tempo_em_minutos, tempo_em_horas;

    printf("-> Insira o tempo em segundos: ");
    scanf("%d", &tempo_em_segundos);

    tempo_em_minutos = tempo_em_segundos/60;
    tempo_em_horas = tempo_em_minutos/60;

    printf("\n| TEMPO EM SEG: %d\n", tempo_em_segundos);
    printf("| TEMPO EM MIN: %d\n", tempo_em_minutos);
    printf("| TEMPO EM HORAS: %d", tempo_em_horas);
}

void executar_ex_8_8(){
    float investimento_apostadores[3], divisao_do_premio_por_apostador[3], total_da_aposta, proporcao_apostadores[3], premio_da_loteria;

    printf("-> Insira o prêmio da loteria: R$");
    scanf("%f", &premio_da_loteria);

    for(int i=0; i<3; i++){
        printf("\n-> Insira o valor que o %dº apostador investiu: R$", i+1);
        scanf("%f", &investimento_apostadores[i]);
    }

    total_da_aposta = investimento_apostadores[0] + investimento_apostadores[1] + investimento_apostadores[2];
    
    printf("\n\n| RESULTADOS\n");
    for(int i=0; i<3; i++){
        proporcao_apostadores[i] = investimento_apostadores[i]/total_da_aposta;
        divisao_do_premio_por_apostador[i] = proporcao_apostadores[i]*premio_da_loteria;
        printf("| APOSTADOR %d: R$%.2f\n", i+1, divisao_do_premio_por_apostador[i]);
    }
}

void executar_ex_9(){
    float numero_real_1, numero_real_2, resultado_da_divisao;

    printf("-> Insira o 1º número real: ");
    scanf("%f", &numero_real_1);

    do{
        printf("\n-> Insira o 2º número real: ");
        scanf("%f", &numero_real_2);
        if(numero_real_2 == 0){
            printf("\nO denominador não pode ser zero. ");
        }
    } while(numero_real_2 == 0);

    resultado_da_divisao = numero_real_1/numero_real_2;

    printf("\n| RESULTADO DA DIVISÃO: %.2f", resultado_da_divisao);
}

void executar_ex_10(){
    float numero_real_1, numero_real_2;

    printf("-> Insira o 1º número real: ");
    scanf("%f", &numero_real_1);
    printf("\n-> Insira o 2º número real: ");
    scanf("%f", &numero_real_2);

    if((numero_real_1 > 0) && (numero_real_2 > 0)){
        printf("\n| Valores   são   validos.");
    }
    else {
        printf("\n| Valores invalidos.");
    }

}

void executar_ex_11(){
    float raio_do_circulo, resultado_da_area;
    float const PI = 3.14;
    
    do{
        printf("-> Insira o valor do raio do círculo: ");
        scanf("%f", &raio_do_circulo);
        if(raio_do_circulo < 0){
            printf("\n| Erro ao calcular a área, pois o raio é negativo. ");
            system("pause");
        }
    } while(raio_do_circulo < 0);

    resultado_da_area = PI*raio_do_circulo*raio_do_circulo;

    printf("\n| A área do círculo é: %.2f", resultado_da_area);
}