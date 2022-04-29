#include <stdio.h>

float vConvert (float, float, float);
int main(void)

{   float vHora, vMinuto, vSegundo, ConvFinal;
    
    printf("Digite o horario que você deseja converter em segundos: ");
    scanf("%f %f %f", &vHora, &vMinuto, &vSegundo);
    
    ConvFinal = vConvert(vHora, vMinuto, vSegundo);
    
    printf("\nO resultado da sua conversão é: %.0f segundos.", ConvFinal);
    
    return 0;
}

float vConvert (float vHora, float vMinuto, float vSegundo)
{   float resultado;
    
    vHora = vHora * 3600;
    vMinuto = vMinuto * 60;
    vSegundo = vSegundo;
    
    resultado = vHora + vMinuto + vSegundo;
    return resultado;
}
