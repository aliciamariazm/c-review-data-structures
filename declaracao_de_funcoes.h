#ifndef FUNCOES_DOS_EXERCICIOS_H
#define FUNCOES_DOS_EXERCICIOS_H

typedef struct{
    char nome[50];
    char cidade_natal[50];
    int idade;
    float altura;
    float peso;
} Usuario;

void executar_ex_1(Usuario *usuario_atual);
void executar_ex_2(Usuario *usuario_atual);
void executar_ex_3();
void executar_ex_4(Usuario *usuario_atual);
void executar_ex_5(Usuario *usuario_atual);

#endif