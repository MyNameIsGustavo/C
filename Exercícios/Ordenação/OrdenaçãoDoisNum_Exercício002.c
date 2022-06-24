//Ordenação com base em dois números.

#include <stdio.h>

int main (void){
    int Val1, Val2;
    int iFor;
    int TipoOrdem;
    
    scanf("%d %d\n", &Val1, &Val2);
    
    if(Val1 <= Val2){
        TipoOrdem = 1; 
    }
    else{
        TipoOrdem = -1;    
    }
    
    for(iFor = Val1; iFor != Val2 + TipoOrdem; iFor = iFor + TipoOrdem){
        printf("%d\n", iFor);
    }
    return 0;
}