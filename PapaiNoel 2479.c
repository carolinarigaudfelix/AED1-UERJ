#include<stdio.h>
#include<string.h>

int main() {
    int quantidade, bom = 0, mal = 0;

    scanf("%d", &quantidade);
    char sinal[quantidade];
    char vet[quantidade][20]; 

    for(int i = 0; i < quantidade; i++) {
        scanf(" %c %s", &sinal[i], vet[i]);
        if(sinal[i] == '+')
            bom++;
        else 
            mal++;
    }

    
    for(int x = 0; x < quantidade - 1; x++){
        int indice = x;
        for(int y = x + 1; y < quantidade; y++){
            if(strcmp(vet[y], vet[indice]) < 0)
                indice = y;
        }
        if(indice != x){
            char temp[20];
            strcpy(temp, vet[x]);
            strcpy(vet[x], vet[indice]);
            strcpy(vet[indice], temp);
        }
    }

    
    for(int i = 0; i < quantidade; i++) {
        printf("%s\n", vet[i]);
    }

    
    printf("Se comportaram: %d | Nao se comportaram: %d\n", bom, mal);

    return 0;
}