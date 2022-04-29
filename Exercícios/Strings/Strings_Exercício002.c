#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{	char RAoriginal[14], vEscola[4], vCurso[4], vAno[3], vSemestre[2],
		 vTurno[2], vSeq[4];
	int cont, iSeq;

	printf("Informe o RA: ");
	scanf("%s", RAoriginal);
	
	printf("\n\n\nO RA informado foi %s\n", RAoriginal);

	cont = 0;
	while (cont < 13)
	{	if (cont < 3)
			vEscola[cont] = RAoriginal[cont];
		else
			if (cont < 6)
				vCurso[cont - 3] = RAoriginal[cont];
			else
				if (cont < 8)
					vAno[cont - 6] = RAoriginal[cont];
				else
					if (cont < 9)
						vSemestre[cont - 8] = RAoriginal[cont];
					else
						if (cont < 10)
							vTurno[cont - 9] = RAoriginal[cont];
						else
							vSeq[cont - 10] = RAoriginal[cont];
				
		cont = cont + 1;
	}

	vEscola[3] = '\0';
	vCurso[3] = '\0';
	vAno[2] = '\0';
	vSemestre[1] = '\0';
	vTurno[1] = '\0';
	vSeq[3] = '\0';
	
	printf("Escola ...: %s\n", vEscola);
	printf("Curso ....: %s\n", vCurso);
	printf("Ano ......: %s\n", vAno);
	printf("Semestre .: %s\n", vSemestre);
	printf("Turno ....: %s\n", vTurno);
	printf("Sequencial: %s\n", vSeq);

	iSeq = atoi(vSeq);
	iSeq = iSeq + 1;
	
	printf("\n\n\nO novo RA eh: %s%s%s%s%s%03d\n", vEscola, vCurso, vAno,
			vSemestre, vTurno, iSeq);
	
	return 0;
}



