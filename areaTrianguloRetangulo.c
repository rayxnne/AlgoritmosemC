/******************************************************************************
                          areaTrianguloRetangulo.c
                               author: rayanne    
                            data:19 ago 25   
                                 04:00pm
           programa para calcular a area de um tringulo retangulo

*******************************************************************************/
#include <stdio.h>

int main()
{
    float base, altura, area;
    base=altura=area=0.0;
    
    printf("\n*******AREA DE UM TRIANGULO RETANGULO*******");
    printf("\n\nDigite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("A area eh: %.2f", area);

}
//fin do main
