#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int ladosPitagoricos(int limit){
    int c, a, b;
    int i;
    int j;
    for (i = 1; i < limit; i++){
        for(j = 1; j < limit;j++){
            
            a = pow(i,2);
            b = pow(j,2);
            c = sqrt((a+b));
            if((a+b) == pow(c,2)){
                printf("%i %i %i\n", i, j, c);
            }
        }
    }

    return 0;
}

int main(){
ladosPitagoricos(20);
}