#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define VALUE 40


void lervetor(float Vetor[]){
	
	for(int i = 0; i < VALUE; i++){
		printf("Digite a nota do %dº aluno: ", i+1);
		scanf("%f", &Vetor[i]);
	}
}


float calcmedia(float Vetor[]){
	
	float Media = 0;
	for(int i = 0; i < VALUE; i++){
		Media += Vetor[i];
	}
	Media /= VALUE;
	
	return Media;
}


int acimamedia(float *PointerMedia, float Vetor[]){
	
	int Count = 0;
	for(int i = 0; i < VALUE; i++){
		if(Vetor[i] > *PointerMedia){
			Count++;
		}
	}
	
	return Count;
}


int countnotas(float *Nota, float Vetor[]){
	
	int Count = 0;
	for(int i = 0; i < VALUE; i++){
		if(Vetor[i] == *Nota){
			Count++;
		}
	}
	return Count;
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float Notas[VALUE], Media, ConsultaNota;
	int AcimaMedia;
	
	lervetor(Notas);
	
	Media = calcmedia(Notas);
	
	AcimaMedia = acimamedia(&Media, Notas);
	
	
	printf("Media da turma: %.1f\n", Media);
	printf("Existem %d media(s) acima da media geral.\n", AcimaMedia);
	printf("Digite a nota que deseja consultar: ");
	scanf("%f", &ConsultaNota);
	
	printf("A nota %.1f aparece %d vez(es) no vetor", ConsultaNota, countnotas(&ConsultaNota, Notas));
	
	
	return 0;
}
