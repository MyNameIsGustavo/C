/*
	Versão que utiliza struct para as unidades de tempo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

struct regTempo {int h, m, s;};

int Segundos(struct regTempo);

int main(void)
{	struct regTempo t;
	int segs;

	scanf("%d %d %d", &t.h, &t.m, &t.s);
	
	segs = Segundos(t);
	
	printf("\nTotal = %d segundos\n", segs);
	
	return 0;
}

int Segundos(struct regTempo p)
{	int total;

	total = p.h * 3600 + p.m * 60 + p.s;
	
	return total;
}
