#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int Litros, Opcao;

  printf("Digite a quantidade de litros abastecidos: ");
  scanf("%d", &Litros);
  printf("Escolha o tipo de combustível (1 - Etanol. 2 - Gasolina): ");
  scanf("%d", &Opcao);

  if (Opcao == 1)
  {
    if
  }
  else if (Opcao == 2)
  {

  }
  else
  {
    printf("Tipo de combustível inválido!\n")
  }


  return 0;
}
