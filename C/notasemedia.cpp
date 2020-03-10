#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	const int LINHA = 5;
	const int COLUNA = 3;
	float Matrix[LINHA][COLUNA], MaiorMedia = 0;
	int i, j;
	
	//fazendo o preenchimento das notas
	for(i = 0; i < LINHA; i++){
		printf("%dº Aluno: ", i+1);
		for(j = 0; j < COLUNA-1; j++){
			scanf("%f", &Matrix[i][j]);
		}
		
		//calculo da media logo após o for
		Matrix[i][j] = ((Matrix[i][0] * 2) + (Matrix[i][1] * 3))/5;
		
		//conferindo qual o aluno com a maior media
		if(Matrix[i][j] > MaiorMedia){
			MaiorMedia = Matrix[i][j];
		}
	}
	system("cls");
	
	//saida do programa para o usuario
	printf("ALUNO | 1ª VA | 2ª VA | MEDIA FINAL\n");
	printf("-----------------------------------\n");
	for(i = 0; i < LINHA; i++){
		printf("  %d   ", i+1);
		for(j = 0; j < COLUNA; j++){
			
			//ajuste simples para não "bugar" a tabela de notas
			if(Matrix[i][j] >= 10){
				printf("|  %.1f ", Matrix[i][j]);
			}
			else
				printf("|   %.1f ", Matrix[i][j]);
			
			}
		
		// se a media for igual a MaiorMedia
		if(Matrix[i][2] == MaiorMedia){
			printf("(Maior média)");
		}
		printf("\n");
	}
	printf("-----------------------------------\n");
	
	
	return 0;
}



	

