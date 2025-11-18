#include <stdio.h> 

int main(){

    // VERIFICAR CONDIÇÕES DO ARMAZEM 

    // VERIFICAR TEMPERATURA, UMIDADE E ESTOQUE.

    float temperatura, umidade;
    unsigned int estoque;
    unsigned int estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
        scanf("%f", &temperatura);
    printf("Nivel de umidade: \n");
        scanf("%f", &umidade);
    printf("Quantidade em Estoque: \n");
        scanf("%u", &estoque);

    if( temperatura > 30){
        printf("Temperatura está alta\n");
    }
    else {
        printf("Temperatura dentro do parâmetro.\n");
    }

    if(umidade > 50 ) {
        printf("Umidade elevada.\n");
    }
    else{
        printf("Umidade dentro do parâmetro.\n");
    }
    if(estoque < estoqueMinimo) {
        printf("Estoque abaixo do minimo.\n");
    }
    else{
        printf("Estoque em quantidade ideal.\n");
    }

    return 0;
}