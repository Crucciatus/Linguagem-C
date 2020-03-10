#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct HistoricoFuncionario{
		
		char Nome[40];
		int AnoNascimento;
	};
	
	HistoricoFuncionario Funcionario01;
	
	Funcionario01.AnoNascimento = 1999;
	
	printf("%d", Funcionario01.AnoNascimento);
	
	return 0;
}
