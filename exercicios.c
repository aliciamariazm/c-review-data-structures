#include <stdio.h>
#include <stdlib.h>
#include "declaracao_de_funcoes.h"

void executar_ex_1(){
    char cidade_natal[50];
    printf("> Insira a sua cidade natal: ");
    scanf(" %[^\n]", cidade_natal);
    printf("\nSua cidade natal é: %s", cidade_natal);
}