// media5.C
// autor: rayanne
// 22 mar 2025
// gostaria de deixar claro que demorei 3 horas nesse código *risada do coringa*

#include <stdio.h>

int main() {

  // variaveis
  int n1, n2, n3, n4, n5;
  int soma; 

    puts("Digite 5 números inteiros: "); // mensagem para o usuário
    scanf("%d", &n1);  // le o primeiro numero
    scanf("%d", &n2);  // le o segundo numero
    scanf("%d", &n3);  // le o terceiro numero
    scanf("%d", &n4);  // le o quarto numero
    scanf("%d", &n5);  // le o quinto numero
    soma = (n1+n2+n3+n4+n5);  // soma os 5 numeros
    printf("O resultado é %d\n", soma); // mostra o resultado
    
    return 0;
}
