#include <stdio.h>
int main(void)
{   double SomaUm, SomaDois, SomaTres, Valor;
    double *c,      *b,         *a;
    
    SomaTres = 97.68;
    SomaDois = 97.68;
    SomaUm = 97.68;
    
    c = &SomaUm;
    b = &SomaDois;
    a = &SomaTres;
    
    Valor = *c + *b + *a;
    
    printf("O valor do ponteiro desejado é: %.2f", Valor);
    return 0;
}
