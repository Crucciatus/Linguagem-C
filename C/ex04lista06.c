#include <stdio.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "Portuguse");

	int HorasTrabalhadas, HorasExtras;	
	float ValorSalarioMin, ValorHora, SalarioBruto, ValorHoraExtra;
	float SalarioExtra, SalarioLiquido;

	printf("Quantidade de horas trabalhadas: ");
	scanf("%d", &HorasTrabalhadas);

	printf("valor do salário mínimo: ");
	scanf("%f", &ValorSalarioMin);

	printf("Quantidade de Horas Extras trabalhadas: ");
	scanf("%d", &HorasExtras);

	ValorHora = ValorSalarioMin/8;

	SalarioBruto = HorasTrabalhadas * ValorHora;

	ValorHoraExtra = ValorSalarioMin/4;

	SalarioExtra = HorasExtras * ValorHoraExtra;			

	SalarioLiquido = SalarioBruto + SalarioExtra;

	printf("Salário a receber: %.2f\n", SalarioLiquido);

	return 0;
}
