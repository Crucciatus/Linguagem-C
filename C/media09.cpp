#include <stdio.h>
#include <locale.h>



float calcmedia(float *PonteiroN1, float *PonteiroN2){
	
	float Media;
	Media = (*PonteiroN1 + *PonteiroN2)/2;
	
	return Media;
}



int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	float N1, N2, Media;
	printf("Digite a primeira nota: ");
	scanf("%f", &N1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &N2);
	
	Media = calcmedia(&N1, &N2);
	
	printf("Media Aritmética: %.1f", Media);
	
	return 0;
}
