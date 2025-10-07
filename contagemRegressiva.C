/*
	Name: contagemRegressiva.C
	Author: rayanne
	Date: 07/10/25 11:01
	Description: programa que realiza uma contagem regressiva de dois numeros, 
	           um superior, ou seja o maior numero e o inferior, o menor numero.
	           ex: superior 15, inferior 5; a contagem vai de 15 ate o numero 5.
*/
#include<stdio.h>
#include<windows.h>

main()
{
	int superior, inferior;
	superior = inferior = 0;
	
	system("cls");//mensagem para limpar a tela
	
	puts("Digite o numero superior e o inferior:");
	scanf("%d", &superior);
	scanf("%d", &inferior);
	
	for(superior<=inferior; superior--;)
	{
		printf("%d\n", superior);
		Sleep(500);
		
		if(superior==inferior)
			exit(0);
	}//fin do for
	
	system("pause");//suspende uma execucao ate pressionar uma tela
}//fin do main

