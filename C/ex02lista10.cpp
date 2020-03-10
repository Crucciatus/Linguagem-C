#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define VALUE 5


void lervetor(float Vetor[]){
	
	for(int i = 0; i < VALUE; i++){
		printf("Digite o salario do %dº funcionário: ", i+1);
		scanf("%f", &Vetor[i]);
	}
}

int busca(float Salarios[], float *PointerConsulta){
	
	int Consulta  = -1;
	for(int i = 0; i < VALUE; i++){
		if(Salarios[i] == *PointerConsulta){
			Consulta = i;
			break;
		}
	}
	
	return Consulta;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float Salarios[VALUE], SalarioConsulta;
	int Consulta;
	lervetor(Salarios);
	
	printf("Digite o salario que deseja consultar: ");
	scanf("%f", &SalarioConsulta);
	Consulta = busca(Salarios, &SalarioConsulta);
	printf("Indice do salário %.2f: %d", SalarioConsulta, Consulta);
	
	return 0;
}
