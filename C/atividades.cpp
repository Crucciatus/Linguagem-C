#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

char Atividade[40];
FILE *PointerFile;

void cadastro(){
	
	PointerFile = fopen("atividades.txt", "a+");
	
	do{
		printf("Digite a atividade que deseja cadastrar ou <ENTER> para sair: ");
		fflush(stdin);
		gets(Atividade);
		
		if(*Atividade != '\n'){
			strcat(Atividade, "\n\0");
			fputs(Atividade, PointerFile);
		}
	
		
	}while(*Atividade != '\n');

	rewind(PointerFile);
	fclose(PointerFile);
}

void mostraratividades(){
	
	PointerFile = fopen("atividades.txt", "r+");
	while(!feof(PointerFile)){
		fgets(Atividade, 40, PointerFile);
		printf("%s", Atividade);
	}
	rewind(PointerFile);
	fclose(PointerFile);
	system("pause");
}

int quantidadeatividades(){
	
	int Contador = 0;
	PointerFile = fopen("atividades.txt", "r");
	while(!feof(PointerFile)){
		fgets(Atividade, 40, PointerFile);
		if(Atividade[0] != '\n'){
			Contador++;
		}
	}
	rewind(PointerFile);
	fclose(PointerFile);
	
	return Contador;
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int Option, Contador = 0;

	do{
		system("cls");
		printf("1. Cadastrar atividades\n");
		printf("2. Mostrar atividades cadastradas\n");
		printf("3. Quantidade de atividades cadastradas\n");
		printf("4. Sair\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &Option);
		system("cls");
		if(Option == 1){
			cadastro();
		}
		else if(Option == 2){
			mostraratividades();
		}
		else if(Option == 3){
			Contador = quantidadeatividades();
			printf("%d atividades estão cadastradas na sua lista.\n", Contador);
			system("pause");
		}
		else if(Option != 4){
			printf("Digite uma opção válida!\n");
			system("pause");
		}
		
	}while(Option != 4);
	
	return 0;
}
