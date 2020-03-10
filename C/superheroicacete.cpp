#include <stdio.h>
#include <locale.h>
	
#define VALUE 7

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	struct HistoricoSuperHeroi{
		
		char Nome[40];
		int AnoCriacao;
	};
	
	
	
	HistoricoSuperHeroi RegistroSuperHeroi[VALUE], Auxiliar;
	
	for(int i = 0; i < VALUE; i++){
		fflush(stdin);
		printf("Super-herói: ");
		gets(RegistroSuperHeroi[i].Nome);
		printf("Ano Criação: ");
		scanf("%d", &RegistroSuperHeroi[i].AnoCriacao);
	}
	
	for(int i = 0; i < VALUE; i++){
	
		for(int j = i+1; j < VALUE; j++){
			if(RegistroSuperHeroi[i].AnoCriacao > RegistroSuperHeroi[j].AnoCriacao){
				Auxiliar = RegistroSuperHeroi[i];
				RegistroSuperHeroi[i] = RegistroSuperHeroi[j];
				RegistroSuperHeroi[j] = Auxiliar;
			}
		}
	}
	
	for(int i = 0; i < VALUE; i++){
		printf("%d - %s\n", RegistroSuperHeroi[i].AnoCriacao, RegistroSuperHeroi[i].Nome);
	}
	
	return 0;
}
