#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float Carga, AreaTransversal, TensaoCisalha, DiametroParafuso;
		
	printf("Qual carga será aplicada no parafuso(em toneladas)? ");
	scanf("%f", &Carga);

	Carga = (Carga * 1000) * 9.8;

	TensaoCisalha = 244 * pow(10, 6);

	AreaTransversal = Carga / TensaoCisalha;

	DiametroParafuso = sqrt(M_PI * AreaTransversal)/4;

	printf("%.2f", DiametroParafuso * 1000);

	return 0;
}
