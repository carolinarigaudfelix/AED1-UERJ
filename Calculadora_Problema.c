#include <stdio.h>

int main() {
    char str[14];
    int soma = 0, centena = 0, dezena = 0, unidade = 0, numeros = 0;

    scanf("%d", &numeros);
    
    for(int j = 0; j<numeros; j++){
        scanf("%s", str);
        
        for (int i = 0; i < 14; i++) {
            if (i == 2   || i == 6 || i == 11) 
                dezena += (int)(str[i] - '0') * 10;
    
            if (i == 3 || i == 7 || i == 12) 
                unidade += (int)(str[i] - '0') *1;
    
            if (i == 5) {
                centena += (int)(str[i] - '0') * 100;
            }
    
        }
        soma = unidade + dezena + centena;
        
        unidade = 0;
        dezena = 0;
        centena = 0;
        printf("%d\n", soma);
        soma = 0;
        
    }
}
