#include <stdio.h>

int main() {

    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */
    int numero1, numero2, resultado;

    numero1 = 5;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    //esultado = resultado + 20;
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    //Resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //Resultado = resultado * numero1;
    resultado *= numero1;
    printf("Resultado: %d\n", resultado);

    //Resultado = resultado / numero1;
    resultado /= numero1;
    printf("Resultado: %d\n", resultado);

}