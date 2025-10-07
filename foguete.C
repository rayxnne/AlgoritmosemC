/*
	Name: foguete.C
	Author: rayanne
	Date: 30/09/25 10:48
	Description: programa para demonstrar o lancamento de um foguete 
	                      com contagem regressiva 
	
*/
#include<stdio.h>
#include<windows.h>

main()
{
	int contagem = 0;
		
	system("cls");//mensagem para limpar a tela
	
	printf("Digite os  segundos para a contagem regressiva: ");
	scanf("%d", &contagem);
	
	while(contagem!=0)
	{
		printf("\n%d", contagem);
		contagem--;
		Sleep(500);
	}
	if(contagem==0)
		puts("\nFOGO!!!\n");												
	
	system("pause");//suspende uma execucao ate pressionar uma tela
}//fin do main

