/*
	Name: solteirosCasados.C
	Author: rayanne
	Date: 07/10/25 09:56
	Description: programa para contabilizar e fazer a media da qtde de homens 
	                    e mulheres solteiros e casados      
*/
#include<stdio.h>

main()
{
	char sexo, casado;
	int casadasM, solteirasM, casadosH, solteirosH;
	int cont;
	casadasM = solteirasM = casadosH = solteirosH = cont = 0;
	
	while(cont<10)
	{
		printf("\nSexo(M/F): ");
		scanf(" %c", &sexo);
		printf("Casado(S/N): ");
		scanf(" %c", &casado);
		
		if(sexo == 'M'||sexo == 'm')// eh homem
			if(casado == 'S'||casado == 's') //eh casado
				casadosH = casadosH+1;
			else //eh solteiro
				solteirosH = solteirosH+1;
		else //eh mulher
			if(sexo == 'F'|| sexo == 'f')
				if(casado == 'S'||casado == 's')//eh casada
				casadasM = casadasM+1;
			else//eh solteira
				solteirasM = solteirasM+1;
	cont++;					
	}//fin do while
	
	printf("\n\nQtde de homens casados: %d", casadosH);
	printf("\nQtde de homens solteiros: %d", solteirosH);
	printf("\nQtde de mulheres casadas: %d", casadasM);
	printf("\nQtde de mulheres solteiras: %d", solteirasM);
	
}//fin do main

