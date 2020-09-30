#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  char options[4][10], continuar;
  int random;
  
  printf("Lhe darei a chance de sortear uma opção dentre 4!\n ");

  for(int i = 0;i<4;i++){
    printf("Digite a opção numero %d\n", i);
    scanf("%10s", options[i]);
  }
  srand(time(NULL));   
  
  random = rand() % 4;
  printf("\n\nO número sorteado foi: %d\n\n",random+1);

  if (random == 0)
    printf("A opção escolhida foi %s! \nAproveite!\n", options[0]);
  else if (random == 1)
    printf("A opção escolhida foi %s! \nboa sorte!\n", options[1]);
  if (random == 2)
    printf("A opção escolhida foi %s! \ndivirta-se!\n", options[2]);
  else if (random == 3)
    printf("A opção escolhida foi %s! \nOtima opção!\n", options[3]);
  
  return 0;
} 
 