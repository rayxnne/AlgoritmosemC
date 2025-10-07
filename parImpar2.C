/*
	Name: parImpar2.C
	Author: rayanne
	Date: 07/10/25 11:03
	Description: programa que verifica se o numero eh par ou impar;
	      caso seja par, soma-se mais 2; caso seja impar, divide-se por 3;
*/
#include<stdio.h>

main()
{
	int num, par, impar, i;
	float num3 = 0.0;
	num = par = impar = i = 0;
	
	puts("Digite 5 numeros:");
	do
	{
	scanf("%d", &num);
		if(num%2 == 0)
		{
			printf("PAR\n");
			num = num + 2;
			printf("%d\n", num);
		}
		else if(num%2 == 1)
		{
			printf("IMPAR\n");
			num3 =(float)num/3;
			printf("%.2f\n", num3);
		}
	i++;
	}while(i<5);
	 
}//fin do main
