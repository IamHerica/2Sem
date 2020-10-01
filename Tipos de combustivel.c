#include <stdio.h>
 
int main() {
 
    int alcool=0, gasolina=0, diesel=0, cod=0;
    
    while(cod !=4){
  
    scanf("%i", &cod);

    if (cod == 1) 
      alcool += 1;
    if (cod == 2)
      gasolina += 1;
    if ( cod == 3)
      diesel += 1; 
    }
    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", alcool, gasolina, diesel);
 
    return 0;
}