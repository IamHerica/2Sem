#include <stdio.h>

int main(void) {
  char letras[3], aux;

  for(int i=0;i < 3;i++){
    printf("Digite a letra numero %d \n\n", i+1);
    scanf(" %[^\n]", &letras[i]); //meaning of  %[^\n] get everything before the enter key
    }    
    while(letras[0]>=letras[1] || letras[1]>=letras[2] || letras[0]>=letras[2]){
      if(letras[0]>letras[1]){
        aux = letras[0];
        letras[0] = letras[1];
        letras[1] = aux;
      }
      if(letras[1]>letras[2]){
        aux = letras[1];
        letras[1] = letras[2];
        letras[2] = aux;
      }
      if(letras[0]>letras[2]){
        aux = letras[0];
        letras[2] = letras[2];
        letras[2] = aux;
      }
    }
  for(int i=0;i < 3;i++){
    printf("Valor da letra na posição %d é = %c \n\n", i, letras[i]);
  }    
  return 0;
}
