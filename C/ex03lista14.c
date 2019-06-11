#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

  setlocale(LC_ALL, "Portuguese");
  int Option, Peso, Velocidade, Caloria;
  float ResultadoFinal, GastoCalor;
  char Comida[25]; 

  //printfs da tela para o usuario
  printf("Escolha uma porção que você deseja comer: \n");
  printf("1- Picanha (100 gramas)\n");
  printf("2- Batata frita (70 gramas)\n");
  printf("3- Salmão grelhado (100 gramas)\n");
  printf("4- Açai com morango (300 ml)\n");
  printf("5- Pão Francês (50 gramas)\n\n");
  
  printf("Digite apenas o número da porção e tecle enter: ");
  scanf("%d", &Option);
  
  printf("\nQuanto você pesa? ");
  scanf("%d", &Peso);

  printf("Para gastar as calorias que você consumiu, você irá caminhar ou correr.\n");
  printf("Você correrá ou caminhará a qual velocidade(em KM/h)? ");
  scanf("%d", &Velocidade);
  system("clear");

  //CALCULOS
  GastoCalor = Velocidade * Peso * 0.0175;

  switch (Option){
    
    case 1:
      Caloria = 287;
      strcpy(Comida, "Picanha");
      break;

   case 2:
      Caloria = 288;
      strcpy(Comida, "Batata frita");
      break;

   case 3:
      Caloria = 171;
      strcpy(Comida, "Salmão grelhado");
      break;

   case 4:
      Caloria = 386;
      strcpy(Comida, "Açai com morango");
      break;

   case 5:
      Caloria = 140;
      strcpy(Comida, "Pão francês");
      break;
  }

  ResultadoFinal = Caloria/GastoCalor;

  
  printf("Uma porção de %s tem %d calorias\n", Comida, Caloria);
  printf("Você deverá se exercitar por %.2f minutos para gastar as calorias consumidas.\n", ResultadoFinal);


  return 0;
}
