/*
	Solucao usando struct para as coordenadas do ponto geométrico.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

struct regPonto {float x, y;};

float DistanciaPontos(struct regPonto, struct regPonto);

int main(void)
{	struct regPonto ponto1, ponto2;
	float dist;

	scanf("%f %f %f %f", &ponto1.x, &ponto1.y, &ponto2.x, &ponto2.y);
	
	while (!(ponto1.x == 0.0 && ponto1.y == 0.0 && ponto2.x == 0.0 && ponto2.y == 0.0))
	{	dist = DistanciaPontos(ponto1, ponto2);
		
		printf("%f\n", dist);
		scanf("%f %f %f %f", &ponto1.x, &ponto1.y, &ponto2.x, &ponto2.y);
	}
	
	return 0;
}

float DistanciaPontos(struct regPonto p1, struct regPonto p2)
{	float dist;

	dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	
	return dist;
}
