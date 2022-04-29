#include <stdio.h>

int main(void)
{	long long int RAoriginal, aux;
	int escola, curso, ano, semestre, turno, seq;

	printf("Informe o RA: ");
	scanf("%lld", &RAoriginal);
	
	aux = RAoriginal;
	
	escola = aux / 10000000000;
	aux = aux % 10000000000;
	curso = aux / 10000000;
	aux = aux % 10000000;
	ano = aux / 100000;
	aux = aux % 100000;
	semestre = aux / 10000;
	aux = aux % 10000;
	turno = aux / 1000;
	aux = aux % 1000;
	seq = aux % 1000;


	printf("Escola ...: %03d\n", escola);
	printf("Curso ....: %03d\n", curso);
	printf("Ano ......: %02d\n", ano);
	printf("Semestre .: %d\n", semestre);
	printf("Turno ....: %d\n", turno);
	printf("Sequencial: %03d\n", seq);
	
	printf("\n\n\nO novo RA eh: %lld\n", RAoriginal + 1);
	
	return 0;
}
