#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

struct regData {int dia, mes, ano;};
typedef struct regData TData;

int DiaSemana(TData);
void ImprimeDia(TData, int);

int main(void)
{	TData data;
	int diasem;

	scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
	while (!(data.dia == 0 && data.mes == 0 && data.ano == 0))
	{	diasem = DiaSemana(data);

		ImprimeDia(data, diasem);
		
		scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
	}
	
	return 0;
}

int DiaSemana(TData data)
{	int D, M, S, A, anoaux, diasem;

	D = data.dia;
	if (data.mes < 3)
	{	M = data.mes + 10;
		anoaux = data.ano - 1;
	}
	else
	{	M = data.mes - 2;
		anoaux = data.ano;
	}
		
	S = anoaux / 100;
	A = anoaux % 100;
	
	diasem = ((int)(2.6 * M - 0.1) + D + A + (A / 4) + (S / 4) - 2 * S) % 7;

	return diasem;
}

void ImprimeDia(TData data, int n)
{	char dias[7][15] = {"Domingo", "Segunda-feira", "Terca-feira",
						"Quarta-feira", "Quinta-feira", "Sexta-feira",
						"Sabado"};

	printf("%02d/%02d/%04d: %s\n", data.dia, data.mes, data.ano, dias[n]);
}
