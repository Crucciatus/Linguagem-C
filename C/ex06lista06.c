#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int DiasVida, AnoVida, MesesVida; 

	printf("Digite a idade de uma pessoa em dias: ");
	scanf("%d", &DiasVida);
	
	AnoVida = DiasVida/365;
	MesesVida = (DiasVida%365)/30;
	DiasVida = (DiasVida%365%30);

	printf("Essa pessoa possui:\n");
	printf("%d ano(s)\n", AnoVida);
	printf("%d mes(es)\n", MesesVida);
	printf("%d dia(s)\n", DiasVida);

	return 0;
}
