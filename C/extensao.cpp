#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	FILE *PointerFile, *PointerFile2;
	char Extensao[3], linha[99];
	int CountExtensao = 0;
	
	system("DIR > Diretorio.txt");
	PointerFile = fopen("Diretorio.txt", "r");
	PointerFile2 = fopen("Diretorio2.txt", "w+");
	
	while(!feof(PointerFile)){
		fgets(linha, 99, PointerFile);
		
		if(isdigit(linha[0])){
			fputs(linha, PointerFile2);	
		}
	}
	fclose(PointerFile);
	rewind(PointerFile2);
	
	printf("Qual extensão deve ser procurada? ");
	gets(Extensao);
	
	while(!feof(PointerFile2)){
		fgets(linha, 99, PointerFile2);
		if(linha[strlen(linha) - 5] == '.' && linha[strlen(linha) - 4] == Extensao[0] && linha[strlen(linha) - 3] == Extensao[1] && linha[strlen(linha) - 2] == Extensao[2]){
			CountExtensao++;
		}
	}
	printf("Existem %d arquivos do tipo %s nesse diretorio\n", CountExtensao, Extensao);
	
	
	fclose(PointerFile2);
}
