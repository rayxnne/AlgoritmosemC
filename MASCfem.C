/*
	Name: MASCfem.C
	Author: rayanne
	Date: 02/09/25 11:44
	Description: programa para identificar a resposta do usuario
	              e mostrar se eh masculino ou feminino
*/

#include<stdio.h>

main()
{
	char sexo = ' ';
	
	puts("\nDigite M/m ou F/f: ");
	scanf("%c", &sexo);
	
	if(sexo=='f'||sexo=='F') // || = ou
		printf("FEMININO");
	        else if(sexo=='m'||sexo=='M')
		        printf("MASCULINO");
		            else
			            puts("RESPOSTA INVALIDA!!!");
}//fin do main
