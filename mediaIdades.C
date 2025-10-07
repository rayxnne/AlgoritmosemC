/*
	Name: mediaIdades.C
	Author: rayanne
	Date: 07/10/25 09:37
	Description: programa para ler idade de 7 pessoas e 
	                 calcular a media entre elas
*/
#include<stdio.h>

main()
{
	int idade, cont, soma;
	float media;
	idade = cont = soma = 0;
	media = 0.0;
	
	do
	{
		puts("Digite a idade:");
		scanf("%d", &idade);
		soma = soma + idade;
		cont++;
	}while(cont<7);
	
	media =(float)soma/cont;
	printf("A media das idades eh: %.2f", media);
	
}//fin do main
