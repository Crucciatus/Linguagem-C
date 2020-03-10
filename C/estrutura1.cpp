#include <stdio.h>
#include <ctype.h>
#define TAM 5


void interce(int *VectorA, int *VectorB, int *VectorC){
	
	
	int i2 = 0;
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(VectorA[i] == VectorB[j]){
				VectorC[i2] = VectorB[j];
				i2++;
				break;
			}
		}
	}
}



void printvector(int *Vetor){
	
	for(int i = 0; i < TAM*2; i++){
		if(Vetor[i]){
			printf("%d ", Vetor[i]);
		}
	}
}


int main(){
	
	
	int VectorA[TAM] = {4, 5, 2, 6, 7}; 
	int VectorB[TAM] = {6, 7, 8, 9, 10}, VectorC[TAM*2];
	
	
	printf("Intersecção: ");
	interce(VectorA, VectorB, VectorC);
	printvector(VectorC);
	printf("\n\n");
	
	return 0;
}
