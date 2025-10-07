/*
	Name: multiplaEscolha.C
	Author: rayanne
	Date: 23/09/25 09:56
	Description: programa para demonstrar a estrutura SWITCH...CASE
	                    para multiplas operacoes matematicas 
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int opc;// variavel da opcao 
	int num1, num2, resulti;
	float result = 0.0;
	num1 = num2 = 0;
	
	while(1)//loop infinito
	{
	system("cls");//CLS - CLEAN SCREEN Limpa a tela
	puts("============================");
	puts("       Menu de opcoes");
	puts("============================");
	puts("1 - Somar dois numeros\n2 - Realizar subtracao\n3 - Multiplicacao\n4 - Fazer divisao\n5 - Finalizar o programa...");
	puts("============================");
	
	printf("\nEscolha uma opcao: ");
	scanf("%d", &opc);
	
	switch(opc)//estrutura para analisar a opcao
	{
		case 1:
			puts("\nAdicao");
			printf("Digite o primerio numero: ");
			scanf("%d", &num1);
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			resulti = num1+num2;
			break;
		case 2:
			puts("\nSubtracao");
			printf("Digite o primerio numero: ");
			scanf("%d", &num1);
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			resulti = num1-num2;
			break;
		case 3:
			puts("\nMultiplicacao");
			printf("Digite o primerio numero:  ");
			scanf("%d", &num1);
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			resulti = num1*num2;
			break;
		case 4:
			puts("\nDivisao");
			printf("Digite o primerio numero: ");
			scanf("%d", &num1);
			printf("Digite o segundo numero: ");
			scanf("%d", &num2);
			result =(float)num1/num2;
			break;
		case 5:
			exit(0);
		default:puts("OPCAO INVALIDA!!! Digite uma opcao que esteja no menu...\n");
			//flag = 1;	
	}
	
	if(opc == 1||opc == 2||opc == 3)
		printf("O resultado eh: %d\n", resulti);	
	else if(opc == 4)
		printf("O resultado eh: %.2f\n", result);	
		
	system("pause");//mensagem "pressione qualquer tecla para continuar"
	}//fin do while
	
}//fin do main

