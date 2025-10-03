/*
	Name: media4.C
	Author: rayanne
	Date: 02/09/25 11:09
	Description: programa para calcular media simples de 4 notas
*/

#include<stdio.h>

main()
{
	float n1, n2, n3, n4, media;
	n1 = n2 = n3 = n4 = media = 0.0;
	puts("\n*******PROGRAMA PARA CALCULAR MEDIA*******\n");
		
	puts("Digite as notas: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	
	media = (n1+n2+n3+n4)/4;
	printf("\nA media eh: %.2f - ", media);
	
	if(media>=6)
		puts("O aluno foi APROVADO!");
	        else
		        puts("O aluno foi REPROVADO!");
}
//fin do main
