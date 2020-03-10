#include <stdio.h>
#include <ctype.h>
#define TAM 5



void uniao(int *VectorA, int *VectorB, int *VectorC){
	
	int i2 = 0;
	for(int i = 0; i < TAM; i++){
		VectorC[i] = VectorA[i];
	}
	
	for(int i = TAM; i < TAM*2; i++){
		VectorC[i] = VectorB[i2];
		i2++;
	}
}


void printvector(int *Vetor){
	
	for(int i = 0; i < TAM*2; i++){
			printf("%d ", Vetor[i]);
		}
	}
}

int main(){
	
	int VectorA[TAM] = {4, 5, 2, 6, 7}; 
	int VectorB[TAM] = {6, 7, 8, 9, 10}, VectorC[TAM*2];
	
	uniao(VectorA, VectorB, VectorC);
	printf("União: ");
	printvector(VectorC);
	printf("\n\n");
	
	return 0;
}
