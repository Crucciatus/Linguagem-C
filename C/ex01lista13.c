#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(){
  
  setlocale(LC_ALL, "Portuguese");
  char FirstWord[20];
  char SecondWord[20];
  int i;

  printf("Digite a primeira palavra: ");
  scanf("%s", FirstWord);

  printf("Digite a segunda palavra: ");
  scanf("%s", SecondWord);

  strcat(FirstWord, SecondWord);
 
  printf("Palavra Contatenada: ");

  for(i = 0; i <= strlen(FirstWord); i++){ 

    printf("%c", toupper(FirstWord[i]));
  }
  printf("\n");
  

  return 0;
}

