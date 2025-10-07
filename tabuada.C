/*
	Name: tabuada.C 
	Author: rayanne
	Date: 07/10/25 10:30
	Description: 
*/
#include<stdio.h>

main()
{
	int num, multi, i;
	num = multi = 0;
	
	puts("\n======TABUADA======\n");
	printf("Entre com numero da tabuda que voce quer: ");
	scanf("%d", &num);
	
	for(i=0; i<=10; i++)
	{
		multi = num * i;
		printf("\n%d x %d = %d", num, i, multi);
	}//fin do for
	
}//fin do main

