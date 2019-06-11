#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
  
  setlocale(LC_ALL, "Portuguese");
  char Password[20]; char User[20];
  int ReturnPass, ReturnUser;

  do{

    printf("Usuário: ");
    fgets(User, sizeof(User), stdin);
    //função fgets é mais recomendada para leitura de variaveis strings

    printf("Senha: ");
    fgets(Password, sizeof(Password), stdin);

    ReturnPass = strcmp(Password, "LOGICA1\n"); //strcmp compara duas strings
    ReturnUser = strcmp(User, "SIUEG\n"); 
    
    // se strcmp == 0, quer dizer que as duas strings são iguais, do contrário, são diferentes
    if (ReturnUser == 0 && ReturnPass == 0){
      printf("ACESSO LIBERADO!\n");
      break;
    }
    else{
      printf("Usuário ou Senha inválido!\n");
    }

  }while(1); 
  


  return 0;
}

