/*
	Name: estatura.C
	Author: rayanne
	Date: 02/09/25 12:03
	Description: programa para verificar se o 
	         usuario é de estatura alta, media ou baixa
*/

#include<stdio.h>

main()
{
	float altura = 0.0;
	puts("\n****VEJA SE VOCE EH DE ESTATURA BAIXA, MEDIA OU ALTA****\n");
	
	puts("Digite sua altura: ");
	scanf("%f", &altura);
	
	if(altura<=1.55)
		puts("Voce eh de estatura BAIXA!");
	        else if(altura<=1.80)
		        puts("Voce eh de estatura MEDIANA!");
		            else
			            puts("Voce eh de estatura ALTA!");
			
}//fin do main
