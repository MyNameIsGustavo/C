/*
	Versão que utiliza struct para os lados do triangulo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

struct regTri {float a, b, c;};

int TipoTriangulo(struct regTri);
void ExibeTipo(int);

int main(void)
{	struct regTri triangulo;
	int tipo;
	
	printf("Informe os lados do triangulo [a b c]:\n");
	scanf("%f %f %f", &triangulo.a, &triangulo.b, &triangulo.c);
	
	tipo = TipoTriangulo(triangulo);
	
	ExibeTipo(tipo);
	
	return 0;
}

int TipoTriangulo(struct regTri triang)
{	if ((triang.a >= triang.b + triang.c) 
		|| (triang.b >= triang.a + triang.c) 
		|| (triang.c >= triang.a + triang.b))
		return 0;
	else
		if (triang.a == triang.b && triang.a == triang.c)
			return 3;
		else
			if ((triang.a == triang.b) 
				|| (triang.a == triang.c) 
				|| (triang.b == triang.c))
				return 2;
			else
				return 1;
}

void ExibeTipo(int t)
{	if (t == 0)
		puts("Nao eh triangulo");
	else
		if (t == 1)
			puts("Escaleno");
		else
			if (t == 2)
				puts("Isoscele");
			else
				puts("Equilatero");
}
