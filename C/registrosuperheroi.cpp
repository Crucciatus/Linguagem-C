#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define VALUE 7

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int OldHeroAno, i;
	char OldHeroName[40];
	
	struct HistoricoSuperHeroi{
		
		char Name[40];
		int AnoCriacao;
	};
	
	HistoricoSuperHeroi RegistroSuperHeroi[VALUE];
	
	for(i = 0; i < VALUE; i++){
		
		printf("Super-herói: ");
		fflush(stdin);
		gets(RegistroSuperHeroi[i].Name);
		printf("Ano de criação: ", RegistroSuperHeroi[i].Name);
		scanf("%d", &RegistroSuperHeroi[i].AnoCriacao);
		system("cls");
	}
//	printf("%d %s\n", RegistroSuperHeroi[2].AnoCriacao, RegistroSuperHeroi[2].Nome);
	
	int AnoAux;
	char NameAux[40];
	
	for(i = 0; i < VALUE; i++){
		
		for(int j = 0; j < 	VALUE; j++){
			
			if(RegistroSuperHeroi[j].AnoCriacao > RegistroSuperHeroi[i].AnoCriacao){
				
				AnoAux = RegistroSuperHeroi[j].AnoCriacao;
				strcpy(NameAux, RegistroSuperHeroi[j].Name);
				RegistroSuperHeroi[j].AnoCriacao = RegistroSuperHeroi[i].AnoCriacao;
				strcpy(RegistroSuperHeroi[j].Name, RegistroSuperHeroi[i].Name);
				RegistroSuperHeroi[i].AnoCriacao = AnoAux;
				strcpy(RegistroSuperHeroi[i].Name, NameAux);
			}
			
		}
		
	}
	
	for(i = 0; i < VALUE; i++){
		printf("%d %s\n", RegistroSuperHeroi[i].AnoCriacao, RegistroSuperHeroi[i].Name);
	}
	
	
	return 0;
}
