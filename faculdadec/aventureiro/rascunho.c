#include <stdio.h>

int main() {

    // Definir os dados e variaveis
    int nota1, nota2, nota3;
    float media;

    printf("******** CALCULO DE MÉDIA DE NOTAS ********\n\n");

    // Armazenar os valores das Notas
    printf("Valor da primeira nota: ");
    scanf("%d", &nota1);

    printf("Valor da segunda nota: ");
    scanf("%d", &nota2);

    printf("Valor da terceira nota: ");
    scanf("%d", &nota3);

    // Calcular a média
    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("A média das suas notas é: %.1f\n", media);

    


}