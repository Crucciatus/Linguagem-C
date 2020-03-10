#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	const int LINHA = 4;
	const int COLUNA = 5;
	int MAT[LINHA][COLUNA], SOMALINHA[LINHA], Soma = 0, TOTAL = 0;
	int i, j;
	
	
	for(i = 0; i < LINHA; i++){
		
		for(j = 0; j < COLUNA; j++){
			printf("Matriz[%d][%d]: ", i+1, j+1);
			scanf("%d", &MAT[i][j]);
			system("cls");
			Soma += MAT[i][j];
		}
		SOMALINHA[i] = Soma;
		TOTAL += SOMALINHA[i];
		Soma = 0;
	}
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d ", MAT[i][j]);
		}
		printf("  %d", SOMALINHA[i]);
		printf("\n");
	}
	printf("\t    _\n");
	printf("\t    %d\n", TOTAL);
	
	return 0;
}



	

