#include <stdio.h>

int calcularProduto(int x1, int x2) {  //função que rebe os inteiros e calcula os produtos de "x1" e "x2"
    if (x2 == 0) { //se "x2"=0 o produto será 0
        return 0;
    } else { //caso contrário, será calculado somando "x1"+ o resultado da recursiva
        return x1 + calcularProduto(x1, x2 - 1); 
    }
}

int main() {
    int x1 = 5; // Valor de x1
    int x2 = 3; // Valor de x2
    int resultado = calcularProduto(x1, x2);
    
    printf("O produto de %d e %d é %d\n", x1, x2, resultado);
    
    return 0;
}
