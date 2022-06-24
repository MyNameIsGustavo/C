//Algoritmo de ordenação de Palavras.

#include <stdio.h>
#include <string.h>

char nomes[10][100];

void ORDENA(){
    int iFor, xFor, CompLetras;
    char Auxiliar[100];
    
    for(iFor = 0; iFor <= 9; iFor++){
        for(xFor = iFor + 1; xFor <= 9; xFor++){
            CompLetras = strcmp(nomes[iFor], nomes[xFor]);
            if(CompLetras > 0){
                strcpy(Auxiliar, nomes[iFor]);
                strcpy(nomes[iFor], nomes[xFor]);
                strcpy(nomes[xFor], Auxiliar);
            }
        }
    }
}

int main (void)
{   int zFor;
    
    printf("Digite 10 nomes:\n");
    for(zFor = 0; zFor <= 9; zFor++){
        scanf("%s", nomes[zFor]);   
    }
    
    ORDENA();
    
    printf("\nNomes ordenados: \n");
    for(zFor = 0; zFor <= 9; zFor++){
        puts(nomes[zFor]);
    }
    return 0;
}