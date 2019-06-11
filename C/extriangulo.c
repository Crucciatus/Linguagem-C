#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int LadoA, LadoB, LadoC;
	printf("Digite o 1º lado: ");
	scanf("%d", &LadoA);
	printf("Digite o 2º lado: ");
	scanf("%d", &LadoB);
	printf("Digite o 3º lado: ");
	scanf("%d", &LadoC);
	
	if((LadoB - LadoC < LadoA) && (LadoA < LadoB + LadoC))
	{
		if ((LadoA != LadoB) && (LadoA != LadoC) && (LadoB != LadoC))
		{
			printf("Escaleno");
		}
		else
		{
			if (LadoA == LadoB && LadoA == LadoC)
			{
				printf("Equilátero");
			}
			else
			{
				printf("Isosceles");
			}
		}
		
	}
	else
	{
		printf("Essas medidas não formam um triângulo");
	}

	return 0;
}
