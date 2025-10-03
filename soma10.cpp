/******************************************************************************
programa para somar 10 numeros com a estrutura de repetição while
autor: rayanne
22 mar 2025
*******************************************************************************/
#include <stdio.h>

int main() {

int numeros[9];
int soma=0;
int i;

for (i=0; i<=10;i++) {
    printf("Escreva o %dº numero: ", i+1);
    scanf("%d", &numeros[i]);
}
    soma = numeros[i];
    printf("O resultado é %d", soma);

} // fim do programa
