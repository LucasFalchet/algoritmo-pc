#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float velo_inicial, angulo, rad, alcance;
    printf("Qual a velocidade inicial (m/s)? ");
    scanf("%f", &velo_inicial);
    printf("Qual o ângulo de lançamento em graus? ");
    scanf("%f", &angulo);

    rad = (angulo*3.14)/180;

    alcance = pow(velo_inicial, 2)*sin(2*rad)/9.8;

    printf("\nO alcance horizontal estimado é: %.2f metros", alcance);

    return 0;
}
