#include <stdio.h>
#include <stdlib.h>
#define TAM 5



void insere(int &x, int *Vetor){
	
	int i;
	for(i = 0; i < TAM; i++){
		if(x == Vetor[i]){
			printf("Esse valor já existe no vetor!\n");
			exit(0);
		}
	}
	Vetor[i] = x;
	printf("teste");
}

void remove(int x, int *Vetor){
	
	int flag = 1;
	for(int i = 0; i < TAM; i++){
		if(x == Vetor[i]){
			Vetor[i] = 0;
			flag = 0;
		}
	}
	
	if(flag){
		printf("Esse valor não existe no vetor!\n");
		exit(0);
	}
}

void atribui(int *VetorA, int *VetorB){
	
	for(int i = 0; i < TAM; i++){
		VetorA[i] = VetorB[i];
	}
}

int min(int *VetorA){
	
	int Min = VetorA[0];
	for(int i = 1; i < TAM; i++){
		if(VetorA[i] < Min){
			Min = VetorA[i];
		}
	}
	return Min;
}

int max(int *VetorA){
	
	int Max = VetorA[0];
	for(int i = 1; i < TAM; i++){
		if(VetorA[i] > Max){
			Max = VetorA[i];
		}
	}
	return Max;
}

bool igual(int *VetorA, int *VetorB){
	
	bool iguais = false;
	int Aux, Count = 0;
	for(int i = 0; i < TAM; i++){
		for(int j = i; j < TAM; j++){
			if(VetorA[i] > VetorA[j]){
				Aux = VetorA[i];
				VetorA[i] = VetorA[j];
				VetorA[j] = Aux;
			}
			if(VetorB[i] > VetorB[j]){
				Aux = VetorB[i];
				VetorB[i] = VetorB[j];
				VetorB[j] = Aux;
			}
		}
	}
	
	
	for(int i = 0; i < TAM; i++){
		if(VetorA[i] == VetorB[i]){
			Count++;		
		}
	}
	if(Count == TAM){
		iguais = true;
	}
	
	return iguais;
}


int main (){
	
	int VetorA[TAM] = {2, 5, 4, 10, 3}, VetorB[TAM] = {10, 4, 3, 5, 2};
	int x = 7, Option;
	
	do{
		
		printf("1 - União\n");
		printf("2 - Intersecção\n");
		printf("3 - Diferença\n");
		printf("4 - Membro\n");
		printf("5 - Cria Con Vazio\n");
		printf("6 - Insere\n");
		printf("7 - Remove\n");
		printf("8 - Atribui\n");
		printf("9 - Minimo valor\n");
		printf("10 - Maximo valor\n");
		printf("11 - Igual\n");
		printf("0 - Sair\n");
		switch (Option){
			
			case 
		
		printf("máximo valor do vetor é: %d\n\n", max(VetorA));
	
		printf("%s\n", igual(VetorA, VetorB) ? "True" : "False");




		printf("Vetor A: ");
		for(int i = 0; i < TAM; i++){
			printf("%d ", VetorA[i]);
		}
		printf("\n");
	
		printf("Vetor B: ");
		for(int i = 0; i < TAM; i++){
			printf("%d ", VetorB[i]);
		}
	}while(Option != 0);
	
	return 0;
}
