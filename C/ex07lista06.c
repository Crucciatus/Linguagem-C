#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

	int Numero, Tabuada = 1;
	printf("Tabuada Simples - Multiplicação\n");
	printf("Digite um número: ");
	scanf("%d", &Numero);
	
	while (Tabuada <= 10){
		
		printf("%d x %d = %d\n", Numero, Tabuada, Numero * Tabuada);
		Tabuada++;
	}

	return 0;
}
