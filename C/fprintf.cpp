#include <stdio.h>

int main(){
	
	FILE *PointerFile;
	int Numero = 99;
	
	PointerFile = fopen("fprintf.txt", "w+");
	
	fprintf(PointerFile, "testando caraio %d vezez seguidas", Numero);
	
	return 0;
}
