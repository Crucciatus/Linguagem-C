#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int opcoes(float *PonteiroTotal){
	int flag, opcao;
	do{
		flag = 0;
		printf("1) A vista com 10%% de desconto\n");
		printf("2) 2 vezes (preço da etiqueta)\n");
		printf("3) 3 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00).\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &opcao);
		system("cls");
		
		if((opcao != 1 && opcao != 2 && opcao != 3) || (opcao == 3 && *PonteiroTotal <= 100)){
			printf("Opção inválida, tente novamente!\n\n");
			flag = 1;
		}
			
	}while(flag);
	
	return opcao;
}

float totalapagar(int *PonteiroOption, float *PonteiroTotal){
	
	float Total;
	switch (*PonteiroOption){
		
		case 1: 
			Total = *PonteiroTotal - (*PonteiroTotal * 0.10);
			printf("Total a pagar a vista com 10%% de desconto: R$ %.2f", Total);
			break;
		
		case 2:
			Total = *PonteiroTotal;
			printf("2 vezes de R$ %.2f sem juros\n", Total/2);
			printf("Total: %.2f", Total);
			break;
		
		case 3:
			
	}
}



int main(){
	
	
	setlocale(LC_ALL, "Portuguese");	
	float TotalGasto;
	int opcao;
	printf("Digite o total gasto: ");
	scanf("%f", &TotalGasto);

	opcao = opcoes(&TotalGasto);
	
	
	
	return 0;
}
