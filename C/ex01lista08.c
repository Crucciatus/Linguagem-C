#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int NumeroA, NumeroB, NumeroC;
  float X1, X2, Delta;

  printf("Digite três valores inteiros: ");
  scanf("%d", &NumeroA);
  scanf("%d", &NumeroB);
  scanf("%d", &NumeroC);
 
  Delta = pow(NumeroB, 2) - 4 * NumeroA * NumeroC;
  X1 = (-NumeroB + sqrt(Delta))/(2 * NumeroA);
  X2 = (-NumeroB - sqrt(Delta))/(2 * NumeroA);


  
  if (NumeroA != 0 && Delta >= 0)
  {
    printf("Duas Raízes são X1 %.2f e %.2f", X1, X2);
  }
  else if (NumeroA == 0)
  {
    printf("Não é equação do Segundo grau.");
    
  }
  else if (Delta < 0)
  {
    printf("Não há raízes reais");
    
  }
     
   
  return 0;
}
