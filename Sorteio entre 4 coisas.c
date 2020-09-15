#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

  char op1[10], op2[10], op3[10], op4[10];
  int x;
  
  printf("Lhe darei a chance de sortear uma opção de 4! Por favor, insira suas opções:\n ");
  scanf("%s\n%s\n%s\n%s\n", op1, op2, op3, op4);
  
 srand(time(0));
  x = (rand() % 4) + 1;
 
  if (x == 1)
    printf("A opção escolhida foi %s!. Aproveite!\n", op1);
  else if (x ==2)
    printf("A opção escolhida foi %s!, boa sorte!\n", op2);
   if (x == 3)
    printf("A opção escolhida foi %s!, divirta-se!\n", op3);
  else if (x == 4)
    printf("A opção escolhida foi %s!. Otima opção!\n", op4);

  return 0;
}