#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 100

FILE *PointerFile;
int NumeroElementos = 0;
struct RegistroPontos{
	
	char NumeroPonto[10];
	char Predio[40];
	char Andar[10];
	char Sala[40];
	char Switch[10];
	int PortaSwitch;
};

void cadastropontos(){
	
	RegistroPontos Ponto[1];
	PointerFile = fopen("RegistroPontos.dat", "a+b");
	
	if(PointerFile == NULL){
		printf("Erro ao abrir o arquivo!\n");
		exit(1);
	}
	
	do{
		
		printf("Número: ");
		fflush(stdin);
		gets(Ponto[1].NumeroPonto);
		
		if(stricmp(Ponto[1].NumeroPonto, "FIM")){
			
			printf("Prédio: ");
			gets(Ponto[1].Predio);
			
			printf("Andar: ");
			gets(Ponto[1].Andar);
			
			printf("Sala: ");
			gets(Ponto[1].Sala);
			
			printf("Switch: ");
			gets(Ponto[1].Switch);
			
			printf("Porta do Switch: ");
			scanf("%d", &Ponto[1].PortaSwitch);
			
			fwrite(Ponto, sizeof(RegistroPontos), 1, PointerFile);
			NumeroElementos++;
		}
		
	}while(stricmp(Ponto[1].NumeroPonto, "FIM"));
	
	fclose(PointerFile);
	
}

relacaogeral(){
	
	RegistroPontos RelacaoGeral[TAM];
	
	PointerFile = fopen("RegistroPontos.dat", "rb");
	int Validacao = fread(RelacaoGeral, sizeof(RegistroPontos), NumeroElementos, PointerFile);
	
	
	printf("------------------------------------------------------------------------------------------------------------------\n");
	printf("			RELAÇÃO GERAL DAS PORTAS\n");
	printf("------------------------------------------------------------------------------------------------------------------\n");
	printf("Número		Andar		Sala		Switch		Portas\n");
	printf("------------------------------------------------------------------------------------------------------------------\n");
	

	printf("PRÉDIO: %s", RelacaoGeral[0].Predio);


	fclose(PointerFile);
}


int main(){
	RegistroPontos RelacaoGeral[NumeroElementos];
	setlocale(LC_ALL, "Portuguese");
	

	relacaogeral();

	return 0;
}
