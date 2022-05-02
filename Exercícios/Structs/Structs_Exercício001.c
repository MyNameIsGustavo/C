#include <stdio.h>

int main (void)
{
    struct regData {unsigned char dia, mes; unsigned short int ano;};
    struct regData Data, DataInformada;
    
    Data.dia = 15;
    Data.mes = 8;
    Data.ano = 2009;

    printf("%hhu/%hhu/%hu\n\n", Data.dia, Data.mes, Data.ano);

    scanf("%hhu%hhu%hu", &DataInformada.dia, &DataInformada.mes, &DataInformada.ano);

    printf("%hhu/%hhu/%hu\n\n", DataInformada.dia, DataInformada.mes, DataInformada.ano);

    if (Data.dia == DataInformada.dia && Data.mes == DataInformada.mes && Data.ano == DataInformada.ano)
    {
        printf("As datas são iguais.");
    }
    else
    {
        printf("As datas não são iguais.");
    }
}