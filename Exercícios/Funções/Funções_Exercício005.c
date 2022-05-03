#include <stdio.h>
#include <math.h>

float DistanciaPontos(float, float, float, float);
int main(void)
{float x0, y0, x1, y1, dist;

	scanf("%f %f %f %f", &x0, &y0, &x1, &y1);
	
	while (!(x0 == 0.0 && y0 == 0.0 && x1 == 0.0 && y1 == 0.0))
	
	{	dist = DistanciaPontos(x0, y0, x1, y1);
		
		printf("%f\n", dist);
		scanf("%f %f %f %f", &x0, &y0, &x1, &y1);
	}
	return 0;
}

float DistanciaPontos(float x0, float y0, float x1, float y1)
{ 
    float x, y, resulParcial, resultado;
    
    x = x1 - x0;
    y = y1 - y0;
    
    resulParcial = pow(x, 2) + pow(y, 2);
    resultado = sqrt(resulParcial);
    
    return resultado;
}