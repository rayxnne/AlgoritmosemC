/*
	Name: classificacaoIdade.C
	Author: rayanne
	Date: 30/09/25 10:44
	Description: programa para classificar a idade de uma pessoa entre 
	               bebe, crianca, adolescente, adulto e idoso 
*/
#include<stdio.h>

main()
{
	int idade = 0;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade<=2)
		puts("Voce eh um bebe!");
			else if(idade<12)
			puts("Voce eh uma crianca!");
				else if(idade<=19)
				puts("Voce eh um adolescente!");
					else if(idade<65)
					puts("Voce eh um adulto!");
						else
						puts("Voce eh um idoso!");
	
}//fin do main
