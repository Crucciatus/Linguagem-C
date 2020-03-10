#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	FILE *PointerFile;
	char FileName[20];
	char VectorVogais[50];
	char VectorCons[50];
	
	printf("Qual nome você deseja para seu arquivo? ");
	gets(FileName);
	
	PointerFile = fopen(FileName, "r");
	
	//teste de erro na abertura
	if(PointerFile == NULL){
		printf("Não foi possivel abrir o arquivo! \n");
		exit(1);
	}
	
	int Caracter, i = 0, i2 = 0, flag;
	while((Caracter = fgetc(PointerFile)) != EOF) {
		flag = 1;
		Caracter = tolower(Caracter);
		
		if(isalpha(Caracter)){
			
			for(int j = 0; j < 50; j++){
				
				if(VectorVogais[j] == Caracter){
					flag = 0;
					break;
				}
				else if(VectorCons[j] == Caracter){
					flag = 0;
					break;
				}
			}
		
			if(flag){
				if(Caracter == 'a' || Caracter == 'e' || Caracter == 'i' || Caracter == 'o' || Caracter == 'u'){
					VectorVogais[i] = Caracter;
					i++;
				}
				else{
					VectorCons[i2] = Caracter;
					i2++;
				}
			}
		}
	}
	
	VectorVogais[i] = '\0';
	VectorCons[i] = '\0';
	
	printf("vogais existentes no arquivo: %s \n", VectorVogais);
	printf("Consoantes existentes no arquivo: %s \n", VectorCons);
	
	
	fclose(PointerFile);
	return 0;
}
