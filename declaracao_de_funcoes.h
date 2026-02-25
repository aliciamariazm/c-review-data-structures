#ifndef FUNCOES_DOS_EXERCICIOS_H
#define FUNCOES_DOS_EXERCICIOS_H

typedef struct{
    char nome[50];
    char cidade_natal[50];
    int idade;
    float altura;
} Usuario;

void executar_ex_1(Usuario *usuario_atual);
void executar_ex_2(Usuario *usuario_atual);
void executar_ex_3();

#endif