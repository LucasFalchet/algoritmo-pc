#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    // Inicializando o contador com 0
    int i, quant_muni = 0;
    // Criando vetores para guardar as 5 leituras
    float temp_media[5];
    char municipio[5][50];

    for(i = 0; i < 5; i++){
        printf("Digite o município: ");
        scanf("%49s", municipio[i]); // Guarda na posição 'i'

        printf("Digite a temperatura média do município (em ºC): ");
        scanf("%f", &temp_media[i]); // Guarda na posição 'i'

        if(temp_media[i] < 10){
            quant_muni += 1;
        }
    }

    // Novo laço apenas para imprimir o que foi guardado nos vetores
    for(i = 0; i < 5; i++){
        printf("Município: %s | Temp. Média: %.2f ºC\n", municipio[i], temp_media[i]);
    }

    printf("\nMunicípios com temperatura menor que 10ºC: %d\n", quant_muni);

    return 0;
}
