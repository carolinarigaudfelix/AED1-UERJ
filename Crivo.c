#include <stdio.h>


int main(void) {
    int limit = 71;
    int vet[limit+1];

    for(int i = 2; i<=limit; i++){
        int count=0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
         if (count == 2) {
                printf("%d\n", i);
                vet[i] = i;
        }
    }
}