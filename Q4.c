#include <stdio.h>

int isPerfect(int num) {
    int somaFatores = 1; // Inicia a soma com 1, pois 1 é sempre um fator válido

    for (int i = 2; i * i <= num; i++) { //percorre valores de i de 2 até a raiz quadrada de "num"
        if (num % i == 0) { //verificam se "num"  é divisível por i. 
            somaFatores += i; //Se sim, adiciona i à somaFatores, pois i é um fator do número.
            if (i != num / i) { // Para evitar duplicar o fator se for um quadrado perfeito
                somaFatores += num / i;
            }
        }
    }

    return somaFatores == num; //retorna 1 se "somadosfatores" for igual a "num"
}

int main() {
    printf("Números perfeitos entre 1 e 1000:\n");
    
    for (int num = 1; num <= 1000; num++) { //repete todos os números de 1 a 1000
        if (isPerfect(num)) {
            printf("%d: ", num);
            
            for (int i = 1; i < num; i++) { 
                //Dentro do loop interno, verifica todos os possíveis fatores menores que "num". Se "num" for divisível por i, imprimimos i (um fator) seguido de um espaço.
                if (num % i == 0) {
                    printf("%d ", i);
                }
            }
            
            printf("\n");
        }
    }
    
    return 0;
}
