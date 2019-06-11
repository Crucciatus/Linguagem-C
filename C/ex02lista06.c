#include <stdio.h>

int main(){
	
	int Saque, Notas100, Notas50, Notas20, Notas10, Notas5, Notas2, Notas1;

	printf("Informe o valor do saque: ");
	scanf("%d", &Saque);

	Notas100 = Saque/100;

	Notas50 = (Saque%100)/50;

	Notas20 = (Saque%100%50)/20;
	
	Notas10 = (Saque%100%50%20)/10;
	
	Notas5 = (Saque%100%50%20%10)/5;

	Notas2 = (Saque%100%50%20%10%5)/2;

	Notas1 = (Saque%100%50%20%10%5%2);
	
	printf("Serão entregues as seguintes notas:\n");
	
	printf("%d de 100\n", Notas100);

	printf("%d de 50\n", Notas50);

	printf("%d de 20\n", Notas20);

	printf("%d de 10\n", Notas10);
	
	printf("%d de 5\n", Notas5);

	printf("%d de 2\n", Notas2);

	printf("%d de 1\n", Notas1);

		
	return 0;
}
