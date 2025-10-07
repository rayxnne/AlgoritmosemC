/*
	Name: maiorMenor.C 
	Author: rayanne
	Date: 07/10/25 10:49
	Description: programa que verifica entre 10 numeros 
	                  qual o maior e o menor
*/
#include<stdio.h>

main()
{
	int i, menor, maior, num;
	i = menor = maior = num = 0;
	
	printf("Digite os numeros que deseja: ");
	num = maior = menor;
	while(i<10)
	{
		scanf("%d", &num);
		if(num>maior)
			maior = num;
		else
			menor = num;
		i++;
	}
	printf("\nO maior numero da sequencia eh: %d\n", maior);
	printf("O menor numero da sequencia eh: %d\n", menor);
}//fin do main
