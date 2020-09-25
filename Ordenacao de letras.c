#include <stdio.h>

int main(void) {
  char Letra1, Letra2, Letra3;

    scanf("%c %c %c", &Letra1, &Letra2, &Letra3);

    if ((Letra1 < Letra2) && (Letra2 < Letra3))
      printf("%c %c %c", Letra1, Letra2, Letra3);
    else if ((Letra1 < Letra3) && (Letra3 < Letra2))
      printf("%c %c %c", Letra1, Letra3, Letra2); 

    else if ((Letra2 < Letra1) && (Letra1 < Letra3))
      printf("%c %c %c", Letra2, Letra1, Letra3); 
    else if ((Letra2 < Letra3) && (Letra3 < Letra1))
      printf("%c %c %c", Letra2, Letra3, Letra1); 

    else if ((Letra3 < Letra2) && (Letra2 < Letra1)) 
      printf("%c %c %c", Letra3, Letra2, Letra1);
    else if ((Letra3 < Letra1) && (Letra1 < Letra2)) 
      printf("%c %c %c", Letra3, Letra1, Letra2);
    

    
  return 0;
}
