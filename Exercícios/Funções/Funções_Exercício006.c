#include <stdio.h>

int DiaSemana(int, int, int);

int main(void)
{	int dia, mes, ano, diasem;

	scanf("%d %d %d", &dia, &mes, &ano);
	while (!(dia == 0 && mes == 0 && ano == 0))
	{	diasem = DiaSemana(dia, mes, ano);
		
		printf("%02d/%02d/%04d: %d\n", dia, mes, ano, diasem);
		
		scanf("%d %d %d", &dia, &mes, &ano);
	}
	
	return 0;
}

int DiaSemana(int dia, int mes, int ano)
{	int D, M, S, A, anoaux, diasem;

	D = dia;
	if (mes < 3)
	{	M = mes + 10;
		anoaux = ano - 1;
	}
	else
	{	M = mes - 2;
		anoaux = ano;
	}
		
	S = anoaux / 100;
	A = anoaux % 100;
		
	diasem = ((int)(2.6 * M - 0.1) + D + A + (A / 4) + (S / 4) - 2 * S) % 7;
			
	return diasem;
}
