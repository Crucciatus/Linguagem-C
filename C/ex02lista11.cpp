#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
	
	FILE *PointerFile;
	PointerFile = fopen(argv[argc-1], "r");
	float Number1, Number2, Resultado, Total = 0;
	char Operate;
	
	while(!feof(PointerFile)){
		fscanf(PointerFile, "%f %c %f", &Number1, &Operate, &Number2);
		
		switch (Operate){
			
			case '+':
				Resultado = Number1 + Number2;
				break;
			
			case '-':
				Resultado = Number1 - Number2;
				break;
			
			case '*':
				Resultado = Number1 * Number2;
				break;
				
			case '/':
				Resultado = Number1 / Number2;
				break;
		}
		Total += Resultado;
		
		if(!strcmp(argv[1], "-t")){
			printf("%.2f %c %.2f = %.2f \n", Number1, Operate, Number2, Resultado);
		}
	}
	
	printf("%.2f\n", Total);
	
	
	fclose(PointerFile);
	return 0;
}
