/*
	Name: menuPizzaria.C
	Author: rayanne
	Date: 23/09/25 11:42
	Description: programa que mostra o menu de uma pizzaria 
		para o usuario e analisa a opcao escolhida com SWITCH...CASE
*/
#include<stdio.h>
#include<stdlib.h>//biblioteca para o system e exit
 
main()
{
	int opc, i, total;
	int qtdePizza = total = 0;
	while(1)
	{
		system("cls");
		puts("Quantas pizzas voce quer pedir?");
		scanf("%d", &qtdePizza);
		for(i=0; i<qtdePizza; i++)
		{
			puts("==================================="); 
			puts("               MENU     ");
			puts("Escolha um sabor do MENU abaixo");
			puts("1 - Queijo \n2 - Calabresa\n3 - Frago com Catupiry\n4 - Carne Seca\n5 - Queijo com Calabresa\n6 - Romeu e Julieta\n7 - Chocolate\n8 - Portuguesa");
			puts("===================================");
			puts("\nEscolha uma opcao:");
			scanf("%d", &opc);
			switch(opc)
			{
				case 1:
					puts("A pizza de Queijo esta sendo preparada...");
					total = total + 42;
					break;
				case 2:
					puts("A pizza de Calabresa esta sendo preparada...");
					total = total + 48;
					break;
				case 3:
					puts("A pizza de Frango com Catupiry esta sendo preparada...");
					total = total + 45;
					break;
				case 4:
					puts("A pizza de Carne Seca esta sendo preparada...");
					total = total + 50;
					break;
				case 5:
					puts("A pizza de Queijo com Calabresa esta sendo preparada...");
					total = total + 40;
					break;
				case 6:
					puts("A pizza de Romeu e Julieta esta sendo preparada...");
					total = total + 39;
					break;
				case 7:
					puts("A pizza de Chocolate esta sendo preparada...");
					total = total + 38;
					break;
				case 8:
					puts("A pizza Portuguesa esta sendo preparada...\n");
					total = total + 46;
					break;
				case 9:
					exit(0);
					default:puts("Opcao invalida... Digite uma opcao do MENU por favor!!!");
			}
		}
		printf("Voce pediu %d pizzas e o total da sua compra eh de R$%d,00\n", qtdePizza,total);
		system("pause");
	}//fin do loop
}//fin do main
