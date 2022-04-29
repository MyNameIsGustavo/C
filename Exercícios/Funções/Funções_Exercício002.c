#include <stdio.h>

int CalcTriang (int, int, int);
void Mensagens (int);

int main(void)
{   int num1, num2, num3, RtnCalcTriang;
    
    printf("Digite três valores que formam um triângulo: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    RtnCalcTriang = (CalcTriang(num1, num2, num3));
    Mensagens(RtnCalcTriang);
    
    return 0;
}

int CalcTriang(int num1, int num2, int num3)
{   int Equilatero, Isosceles, Escaleno, MSGErro, Resultado;

    if (num1 + num2 >= num3 && num1 + num3 >= num2 && num2 + num3 >= num1)
    {
        if (num1 == num2 && num1 == num3 && num2 == num3){
            Equilatero = 1;
                Resultado = Equilatero;}
        else
            if(num1 == num2 || num1 == num3 || num2 == num3){
                Isosceles = 2;
                    Resultado = Isosceles;}
            else
                if(num1 != num2 && num1 != num3 && num2 != num3){   
                    Escaleno = 3;
                        Resultado = Escaleno;}
    }
    else{
        MSGErro = 4;
            Resultado = MSGErro;}
    return Resultado;
}

void Mensagens(int Resultado)
{   int vTriangulo;

    vTriangulo = Resultado;
    
    if (vTriangulo == 1)
        printf("O seu triângulo é do tipo Equilatero.\n");
    else
        if(vTriangulo == 2)
            printf("O seu triângulo é do tipo Isosceles.\n");
        else
            if (vTriangulo == 3)
                printf("O seu triângulo é do tipo Escaleno.\n");
            else
                if(vTriangulo == 4)
                    printf("Esses números não formam um triângulo.");
}