#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1; // (a) Se n=1, retorna m+1
    } else if (m == 1) {
        return n + 1; // (b) Se m=1, retorna n+1
    } else {
        // (c) Se m e n são maiores que 1, calcula f(m, n - 1) + f(m - 1, n)
        return f(m, n - 1) + f(m - 1, n);
    }
}

int main() {
    int m = 3; // Valor de m
    int n = 2; // Valor de n
    
    int resultado = f(m, n);
    
    printf("Resultado: %d\n", resultado);
    
    return 0;
}
