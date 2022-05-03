#include <stdio.h>

int PertinenciaPonto(int,int,int,int,int,int);
int main(void)
{
    int n, cont, pertence;
    int x0, y0, x1, y1, x, y;
    
    printf("Informe a quantidade de casos: ");
    scanf("%d", &n);
    
    cont= 0;
    while(cont < n)
    {
        scanf("%d %d %d %d %d %d", &x0, &y0, &x1,&y1,&x,&y);
        pertence = PertinenciaPonto(x0, y0, x1, y1, x, y);
        
        if(pertence == 0)
            puts("Não-contido");
        else
            puts("Contido");
        cont = cont + 1;
    }
    return 0;
}

int PertinenciaPonto(int x0, int y0, int x1, int y1, int x, int y)
{
    if ( x >= y0 && x <= x1 && y >= 0 && y0 <= y1)
        return 1;
    else
        return 0;
}
