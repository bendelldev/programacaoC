#include <stdio.h>

int main(){

    int numero = 10;
    
    int resultado = numero % 2;
    
    printf("O numero é %d, portanto\n", resultado);

    if(numero % 2 == 0){
        printf("O número é par\n");
    } 
    else{
        printf("O número é impar\n");
    }

}