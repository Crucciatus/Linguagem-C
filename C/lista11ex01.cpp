#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <String.h>
#include <ctype.h>

FILE *readarchive(){
	
	char ArchiveName[20];
	FILE *ArchivePointer;
	
	printf("Digite o nome do arquivo: ");
	gets(ArchiveName);
	ArchivePointer = fopen(ArchiveName, "r");
	
	return ArchivePointer;
}

int countvogais(FILE *ArchivePointer){
	
	char Caracter, VectorVogais[] = {'a', 'e', 'i', 'o', 'u'};
	int CountVogais = 0;
	
	while((Caracter = fgetc(ArchivePointer)) != EOF){
		for(int i = 0; i < strlen(VectorVogais); i++){
			if(tolower(Caracter) == VectorVogais[i]){
				CountVogais++;
				break;
			}
		}
	}
	rewind(ArchivePointer);
	
	return CountVogais;
}

int countcons(FILE *ArchivePointer){
	
	char Caracter, VectorVogais[] = {'a', 'e', 'i', 'o', 'u'};
	int CountCons = 0;
	
	while((Caracter = fgetc(ArchivePointer)) != EOF){
		for(int i = 0; i < strlen(VectorVogais); i++){
			if((tolower(Caracter) != VectorVogais[i]) && isalpha(Caracter)){
				CountCons++;
			}
		}
	}
	rewind(ArchivePointer);
	
	return CountCons;
}

void extractvogais(FILE *ArchivePointer, char VogaisArchive[]){

//	char VogaisArchive[CountVogais];
	char Caracter, VectorVogais[] = {'a', 'e', 'i', 'o', 'u'};	
	int i2 = 0;
	
	printf("Vogais existentes no texto: ");
	while((Caracter = fgetc(ArchivePointer)) != EOF){
		for(int i = 0; i < strlen(VectorVogais); i++){
			if(tolower(Caracter) == VectorVogais[i]){
				VogaisArchive[i2] = Caracter;
				printf("%c", VogaisArchive[i2]);
				i2++;
				break;
			}
		}
	}
	rewind(ArchivePointer);
	
}

void extractcons(FILE *ArchivePointer, char ConsArchive[]){

	char Caracter, VectorVogais[] = {'a', 'e', 'i', 'o', 'u'};	
	int i2 = 0, CountDiference;
	
	printf("Consoantes existentes no texto: ");
	while((Caracter = fgetc(ArchivePointer)) != EOF){
		CountDiference = 0;
		for(int i = 0; i < strlen(VectorVogais); i++){
			if((tolower(Caracter) != VectorVogais[i]) && isalpha(Caracter)){
				CountDiference++;
				if(CountDiference == strlen(VectorVogais)){
					ConsArchive[i2] = Caracter;
					printf("%c", ConsArchive[i2]);
					i2++;
					break;
				}
			}
		}
	}
	
	rewind(ArchivePointer);
	
}

int main (){

	setlocale(LC_ALL, "Portuguese");	
	FILE *ArchivePointer;
	int CountVogais, CountCons;
	
	ArchivePointer = readarchive();
	CountVogais = countvogais(ArchivePointer);
	CountCons = countcons(ArchivePointer);
	char VogaisArchive[CountVogais];
	char ConsArchive[CountCons];
	extractvogais(ArchivePointer, VogaisArchive);
	printf("\n\n");
	extractcons(ArchivePointer, ConsArchive);
	
	
	fclose(ArchivePointer);
	return 0;
}
