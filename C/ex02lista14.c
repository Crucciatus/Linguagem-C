#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float Salario, Inss, ImpostRenda, TotDescont, PercentDescont, SalarioLiq;
	
	printf("Salário Bruto: R$ ");
	scanf("%f", &Salario);
	
	//CALCULO INSS
	if (Salario <= 5645.80){
		
		if(Salario >= 2822.91){
			
			Inss = Salario * 0.11;
		}
		else if(Salario >= 1693.73){
			Inss = Salario * 0.09;
		}
		else if(Salario <= 1693.72){
			Inss = Salario * 0.08;
		}
		
	}
	else{
		Inss = 642.34;
		
	}	
	
	// CALCULO IMPOSTO DE RENDA
	if (Salario > 1903.98){
		
		if(Salario <= 2826.65){
			ImpostRenda = (Salario - Inss) * 0.075 - 142.80;
		}
    else if(Salario <= 3751.05){
      ImpostRenda = (Salario - Inss) * 0.15 - 354.80;
  	}
    else if(Salario <= 4664.68){
      ImpostRenda = (Salario - Inss) * 0.225 - 636.13;    
    }
    else if(Salario > 4664.68){
      ImpostRenda = (Salario - Inss) * 0.275 - 869.36;
    }
  }
	else{
		
		ImpostRenda = 0;
	}
	


//CALCULO DESCONTOS
TotDescont = ImpostRenda + Inss;
PercentDescont = TotDescont/Salario * 100;

//SALÁRIO LIQUIDO
SalarioLiq = Salario - TotDescont;


//RESULTADOS
	printf("INSS: R$ %.2f\n", Inss);
  printf("Imposto de Renda: R$ %.2f\n", ImpostRenda);
	printf("Total dos descontos: R$ %.2f\n", TotDescont);
  printf("Percentual dos descontos: %.2f%%\n", PercentDescont);
  printf("Salário Liquido: R$ %.2f\n", SalarioLiq);
  
  return 0;

}
