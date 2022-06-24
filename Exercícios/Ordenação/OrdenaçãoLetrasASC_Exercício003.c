//Algoritmo de ordenação de letras ascendente.

#include <stdio.h>
#include <string.h>

char nome[11][80];

void ordenacao(){
    int xFor, yFor, Letras;
    char Auxiliar[80];
    for(xFor = 0; xFor <= 10; xFor++){
        for(yFor = xFor + 1; yFor <= 10; yFor++){
            Letras = strcmp(nome[xFor], nome[yFor]);
            if(Letras > 0){
                strcpy(Auxiliar, nome[xFor]);
                strcpy(nome[xFor], nome[yFor]);
                strcpy(nome[yFor], Auxiliar);
            }
        }
    }
}

int main(void)
{   int iFor;
    
    printf("Insiras as letras para ordenação: ");
    for(iFor = 0; iFor <= 10; iFor++){
        scanf("%c", nome[iFor]);
    }

    ordenacao();
    
    printf("\nAs letras ordenadas:");
    for(iFor = 0; iFor <= 10; iFor++){
        puts(nome[iFor]);
    }
    return 0;
}