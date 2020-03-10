#include <stdio.h>
#include <ctype.h>
#define TAM 5


void diferenca(int *VectorA, int *VectorB, int *VectorC, int *Count){
	
	int flag = 0;
	for(int i = 0; i < TAM; i++){
		flag = 0;
		for(int j = 0; j < TAM; j++){
			if(VectorA[i] != VectorB[j]){
				flag++;
			}
		}
		if(flag == TAM){
			VectorC[*Count] = VectorA[i];
			(*Count++);
			
		}
	}
	
}

void printvector(int *Vetor, int *Tamanho){
	
	for(int i = 0; i < *Tamanho; i++){
		printf("%d ", Vetor[i]);
	}
}


int main(){
	
	
	int VectorA[TAM] = {1, 8, 2, 10, 3}; 
	int VectorB[TAM] = {6, 7, 8, 9, 11}, VectorC[TAM], Count = 0;
	
	
	diferenca(VectorA, VectorB, VectorC, &Count);
	printf("Diferença: ");
	printvector(VectorC, &Count);
	printf("\n\n");

	return 0;
}
