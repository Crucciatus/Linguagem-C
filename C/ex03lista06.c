#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int NumeroConta, Unidade, Dezena, Centena, NumeroContaInvert;
	int DigitoVerif;

	printf("Número da Conta:");
	scanf("%d", &NumeroConta);

	Centena = NumeroConta/100;
	Dezena  = NumeroConta%100/10;
	Unidade = NumeroConta%100%10;

	NumeroContaInvert = Unidade * 100 + Dezena * 10 + Centena;

	NumeroConta += NumeroContaInvert;

	Centena = NumeroConta/100;
        Dezena  = NumeroConta%100/10;
        Unidade = NumeroConta%100%10;

	DigitoVerif = (Unidade * 1 + Dezena * 2 + Centena * 3)%10;

	printf("Dígito Verificador: %d\n", DigitoVerif);

	return 0;
}
