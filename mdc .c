#include <stdio.h>
int mdc(int a, int b);

int main(void) {
    int a = 210;
    int b = 462;

    printf("MDC de %d e %d é: %d\n", a, b, mdc(a, b));

    return 0;
}

int mdc(int a, int b){
    int aux;

    if(b == 0)
        return a;
    while(b != 0){
        aux = a % b;
        a = b;
        b = aux;
    }
    return a;
}