#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void  calculadora(float *PointerN1, float *PointerN2, char Option){
	
	switch (Option){
		case '+':
			*PointerN1 += *PointerN2;
			break;
		
		case '-':
			*PointerN1 -= *PointerN2;
			break;
		
		case '*':
			*PointerN1 *= *PointerN2;
			break;
			
		case '/':
			*PointerN1 /= *PointerN2;
			break;
	}
}


int main(){

	setlocale(LC_ALL, "Portuguese");	
	float N1, N2;
	char Option;
	int Validador = 1;
	
	printf("Digite o calculo desejado, EX: (4 + 2) \n");
	scanf("%f %c %f", &N1, &Option, &N2);
	calculadora(&N1, &N2, Option);
	system("cls");
	
	do{
		printf("Digite a operação que deseja fazer com esse número, EX: (+ 2)\n");
		printf("%.1f ", N1);
		fflush(stdin);
		scanf("%c %f", &Option, &N2);
		Option = toupper(Option);
		system("cls");
		
		if(Option != '+' && Option != '-' && Option != '*' && Option != '/' && Option != 'F'){
			printf("Operação inválida, tente novamente.\n");
		}
		else if(Option == 'F'){
			Validador = 0;
		}
		else{
			calculadora(&N1, &N2, Option);
		}
	
	}while(Validador);
	system("cls");
	
	printf("CALCULO FINALIZADO!\n");
	printf("RESULTADO FINAL: %.1f", N1);
	
	system("pause");
	
	return 0;
}
