/******************************************************************************
programa para somar 10 numeros com a estrutura de repeti��o while
autor: rayanne
22 mar 2025
*******************************************************************************/
#include <stdio.h>

int main() {

int numeros[9];
int soma=0;
int i;

for (i=0; i<=10;i++) {
    printf("Escreva o %d� numero: ", i+1);
    scanf("%d", &numeros[i]);
}
    soma = numeros[i];
    printf("O resultado � %d", soma);

} // fim do programa
