#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>	
#define LINHA 12
#define COLUNA 4

const char* Meses[] = {"jan.", "fev.", "mar.", "abr.", "maio", "jun.", "jul.", "ago.", "set.", "out.", "nov.", "dez."};

void lermatrix(float Vendas[][COLUNA]){

	for(int i = 0; i < LINHA; i++){
		printf("\tTOTAL DE VENDAS\n\n");
		for(int j = 0; j < COLUNA; j++){
			printf("(%s) %dª Semana: ", Meses[i], j+1);
			scanf("%f", &Vendas[i][j]);
		}
		system("cls");
	}
}


void tabela(float Vendas[][COLUNA]){
	
	float TotalMes, TOTAL = 0;
	printf("| MES | 1ª SEMANA | 2ª SEMANA | 3ª SEMANA | 4ª SEMANA |   TOTAL\n");
	printf("-----------------------------------------------------------------\n");
	for(int i = 0; i < LINHA; i++){
		printf("| %s", Meses[i]);
		TotalMes = 0;
		for(int j = 0; j < COLUNA; j++){
			if(Vendas[i][j] >= 100){
				if(Vendas[i][j] < 1000){
					printf("| R$ %.2f ", Vendas[i][j]);
				}
				else{
					printf("| R$ %.2f", Vendas[i][j]);
				}
			}
			else if(Vendas[i][j] >= 10){
				printf("| R$ %.2f  ", Vendas[i][j]);
			}
			else{
				printf("| R$ %.2f   ", Vendas[i][j]);
			}
			TotalMes += Vendas[i][j];
		}
		TOTAL += TotalMes;
		printf("|   R$ %.2f", TotalMes);
		printf("\n-----------------------------------------------------------------\n");
	}
	printf("TOTAL VENDIDO: R$ %.2f\n\n", TOTAL);
}


int main(){

	float Vendas[LINHA][COLUNA];
	setlocale(LC_ALL, "Portuguese");	
	lermatrix(Vendas);
	tabela(Vendas);
	
	return 0;
}
