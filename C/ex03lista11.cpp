#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Portuguese");
	FILE *PointerFile;
	char word[99], Diretorio[3];
	int CountExtence = 0;
	
	system("dir > Diretorio.txt");
	PointerFile = fopen("Diretorio.txt", "r+");

	printf("Qual extensão deve ser procurada? ");
	gets(Diretorio);
	
	while(!feof(PointerFile)){
		
		fgets(word, 99, PointerFile);
		int TamanhoLinha = strlen(word);
		if(word[TamanhoLinha - 5] == '.'){
			if((word[TamanhoLinha-2] == Diretorio[2]) && (word[TamanhoLinha-3] == Diretorio[1]) && (word[TamanhoLinha-4] == Diretorio[0])){
				CountExtence++;
			}
		}
	}
	
	printf("Existem %d arquivos com a extensão %s nessa pasta.\n", CountExtence, Diretorio);
	printf("%c", Diretorio[2]);
	fclose(PointerFile);
	system("pause");
	return 0;
}
