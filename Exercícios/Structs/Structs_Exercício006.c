#include <stdio.h>
struct regData {unsigned char dia, mes; unsigned short int ano;};

int main(void)
{   struct regData Data1, Data2;

    Data1.dia = 15;
    Data1.mes = 8;
    Data1.ano = 2009;

    printf("Informe uma data [DIA/MÊS/ANO]: "); 
    scanf("%hhu %hhu %hu", &Data2.dia, &Data2.mes, &Data2.ano);
    
    if(Data2.dia != Data1.dia && Data2.mes != Data1.mes && Data2.ano != Data1.ano){
        puts("As datas são diferentes.");} 
    else{
        puts("As datas são iguais.");}
    return 0;
}
