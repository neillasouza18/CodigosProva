#include <stdio.h>

void print_ascii_characters() { //usei "void" para declarar que a função não retorna valor
    for (int i = 0; i < 128; i++) { //usei o for para repetir de 0 a 127, e "i" que irá armazenar os valores
        printf("%3d: %c\t", i, i); //uso print para imprimir o valor numérico de "i"
        if ((i + 1) % 10 == 0) { //uso "if" para verificar se ja foram impressos 10 caracteres 
            printf("\n"); //se "if" for verdadeiro, há uma quebra de linha
        }
    }
}

int main() {
    print_ascii_characters();
    return 0; //se correto, voltamos a 0
}
