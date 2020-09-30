#include <stdio.h>
#include <math.h>

//funcao que calcula distancia
float CalculoDistancia(float x1, float y1, float x2, float y2){
	
	float dist, a, b;
	
	a = x2-x1;
	b = y2-y1;
	
	dist = sqrt(pow(a, 2) + pow(b, 2));	
	
	return dist;
	}
	
typedef struct _x {
	float x1;
	float x2;
	float y1;
	float y2;
	float distancia;
} distanciaEntrePontos;

int main (){
	 
	 distanciaEntrePontos Dist;
	 float distancia;
	
	scanf("%f %f %f %f", &Dist.x1, &Dist.y1, &Dist.x2, &Dist.y2);
	
	distancia = CalculoDistancia(Dist.x1, Dist.y1, Dist.x2, Dist.y2);
	
	
	printf("Distancia entre os pontos: %.2f", distancia);
	
}

	 
	
	
	
	