#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
	
	FILE *PointerFile;
	int Idades[TAM], Validacao, IdadesLer[TAM];
	
	for(int i = 0; i < TAM; i++){
	
		printf("Idade: ");
		scanf("%d", &Idades[i]);
	}
	
	PointerFile = fopen("idades.bat", "wb");
	if(PointerFile == NULL){
		printf("Erro ao abrir o arquivo!");
		exit(1);
	}
	
	Validacao = fwrite(Idades, sizeof(int), TAM, PointerFile);
	if(Validacao != TAM){
		printf("Erro ao gravar todos os dados!\n");
	}
	else{
		printf("Dados gravados com sucesso!\n");
	}
	fclose(PointerFile);
	PointerFile = fopen("idades.bat", "rb");
	Validacao = fread(IdadesLer, sizeof(int), TAM, PointerFile);
	if(Validacao != TAM){
		printf("Erro ao gravar todos os dados!\n");
	}
	else{
		for(int i = 0; i < TAM; i++){
			printf("Idade[%d]: %d\n", i, IdadesLer[i]);
		}
	}
	
	fclose(PointerFile);
	
	return 0;
}
