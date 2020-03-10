#include <stdio.h>
#include <ctype.h>
#define TAM 5


bool membro(int x, int *Vetor){
	
	bool exist = false;
	for(int i = 0; i < TAM; i++){
		if(Vetor[i] == x){
			exist = true;
			break;
		}
	}
	
	return exist;
}

void printvector(int *Vetor){
	
	for(int i = 0; i < TAM; i++){
		printf("%d ", Vetor[i]);
	}
}


int main(){
	
	int VectorA[TAM] = {1, 8, 2, 9, 0};
	
	printf("Membro: ");
	printf("%s", membro(8, VectorA) ? "True" : "False");
	printf("\n\n");
	
	return 0;
}
