#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int Num1, Num2, Num3, Num4, Num5, Num6, Contador = 0;

	for(Num1 = 1; Num1 <= 60; Num1++){
		
		for(Num2 = Num1 + 1; Num2 <= 60; Num2++){
			
			for(Num3 = Num2 + 1; Num3 <= 60; Num3++){
				
				for(Num4 = Num3 + 1; Num4 <= 60; Num4++){
					
					for(Num5 = Num4 + 1; Num5 <= 60; Num5++){
						
						for(Num6 = Num5 + 1; Num6 <= 60; Num6++){
							
							printf("%d - %d - %d - %d - %d - %d\n", Num1, Num2, Num3, Num4, Num5, Num6);
							Contador = Contador + 1;
						}
					}
				}
			}
		}
	}
	
	printf("%d", Contador);
	return 0;
}

