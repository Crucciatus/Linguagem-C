#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct FuncionarioRanchoAlegre{
		
		int Numero, QntDependentes;
		float Salario;
		char Nome[40], Data[11], Pais[10], Estado[15], Cidade[30], Fumante, Escolaridade[30];
		char Profissao[30], DataIngresso[11];
		
	};
	
	FuncionarioRanchoAlegre Funcionario1, Funcionario2;
	
	gets(Funcionario1.Nome);
	Funcionario1.Numero = 01;
	gets(Funcionario1.Escolaridade);
	Funcionario1.Salario = 1800;
	
	gets(Funcionario2.Nome);
	Funcionario2.Numero = 02;
	gets(Funcionario2.Escolaridade);
	Funcionario2.Salario = 2454.90;
	
	if(Funcionario1.Salario > Funcionario2.Salario){
		printf("%s\n", Funcionario1.Nome);
		printf("%s\n", Funcionario1.Escolaridade);
		printf("%.2f\n", Funcionario1.Salario);
	}
	else{
		printf("%s\n", Funcionario2.Nome);
		printf("%s\n", Funcionario2.Escolaridade);
		printf("%.2f\n", Funcionario2.Salario);
	}
	
	return 0;
}
