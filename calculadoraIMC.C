/*
programa: calculadoraIMC.C
criado em 24 de fevereiro
autor: rayanne 
implementaçao do while e if else para tomada de decisao
*/

#include <stdio.h>

int main() // funcao principal
{
    // variaveis e inicializacao das mesmas
    int peso = 0; 
    float altura = 0.0;
    float imc = 0.0;
    int cont = 0;
    
    puts("Calculo do IMC para pessoas"); // mensagem
    
    while (cont < 3) // enquanto o contador for menor q 3
    {
        printf("\nPessoa %d\n", cont + 1); // mostra o número da pessoa, primeira, segunda ou terceira
        printf("Peso: "); // mensagem
        scanf("%d", &peso); //entrada de dado
        printf("Altura: "); // mensagem
        scanf("%f", &altura); //entrada de dado
        
        imc = peso / (altura * altura); // calculo do imc
        printf("Seu IMC e: %.4f\n", imc);
        
         if(imc < 16) //aninhamento ou conjunto de if's
             puts("Magreza grave");
                 else if (imc < 17)
                     puts("Magreza moderada");
                         else if(imc < 18.5)
                             puts("Magreza leve");
                                 else if(imc < 25)
                                     puts("Saudavel");
                                         else if(imc < 30)
                                             puts("Sobrepeso");
                                                 else if(imc < 35)
                                                     puts("Obesidade grau I - Leve");
                                                         else if(imc < 40)
                                                             puts("Obesidade grau II - Severa");
                                                                 else(imc > 40); //apenas else pois é a ultima categoria
                                                                     puts("Obesidade grau III - Grave");
        
        cont++; // incrementa o contador para a próxima pessoa
    }
} // fim do programa
