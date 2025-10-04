/******************************************************************************
                            nome: par.impar
                            autor: rayanne
                        data: 18 ago 25  13:30
           algoritmo para verificar se um num eh par ou impar
                      pelo resto da divisao

*******************************************************************************/
#include <stdio.h>

//prototipacao da funcao
void verificaResto(int);

int main()
{
    int x=0;
    puts("\n*********ALGORITMO PARA VERIFICAR SE EH IMPAR OU PAR*********");
    printf("\nDigite um numero: ");
    scanf("%d", &x);
    verificaResto(x);
}
//fin do main

void verificaResto(int x)
{
    int divisao=0;
    divisao=x%2;
    if(divisao==0)
    return printf("O resto da divisao eh %d, portanto o numero eh par", divisao);
    else
    printf("O resultado eh %d, portanto o numero eh impar", divisao);
}//fin da funcao

