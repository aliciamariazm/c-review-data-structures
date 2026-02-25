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