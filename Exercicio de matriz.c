#include <stdio.h>

int main(void) {
  
  float M[5][10], menorValor;
  int indLin, indCol, aux;

  //lendo a matriz
  for (indLin=0; indLin <5; indLin++) {
    for (indCol=0; indCol <10; indCol++) {
      scanf("%f", &M[indLin][indCol]);
    }
  } 


//supondo que o menor valor da matriz esta no primeiro indice para fazer uma comparacao 
  menorValor = M[0][0]; 


//fazendo a comparacao com todos os valores
  for (indLin=0; indLin <5; indLin++) {
    for (indCol=0; indCol <10; indCol++) {
      if (M[indLin][indCol] < menorValor) {
        menorValor = M[indLin][indCol];
      }
    }
  }

  //aqui faco uns testes para que eu possa ver minha logica por escrito 

  
  /*for (indLin=0; indLin <5; indLin++){ //teste
    for (indCol=0; indCol <10; indCol++){
      printf("%1.f\t", M[indLin][indCol]);
    }
  } ISSO É PARA IMPRIMIR A MATRIZ EM TABELINHA PARA EU ENTENDER MELHOR

  printf("\nO menor valor é: %.1f\n", menorValor); ISSO AQUI É PARA VER QUAL O MENOR VALOR
*/
printf("Valores da coluna com menor valor:\n");
  for (indLin=0; indLin <5; indLin++){ //Imprimindo a coluna com menor valor
    for (indCol=0; indCol <10 ; indCol+=10){
      printf("%1.f\t", M[indLin][indCol]);
    }
  }

  return 0;
}