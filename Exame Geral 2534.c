#include<stdio.h>

int main() {
    int N, Q, escolha;
    
    while (scanf("%d %d", &N, &Q) != EOF) {
        int vet[N];
        

        for (int i = 0; i < N; i++) {
            scanf("%d", &vet[i]);
        }
        

        for (int x = 0; x < N - 1; x++) {
            int indiceMaior = x;
            for (int j = x + 1; j < N; j++) {
                if (vet[j] > vet[indiceMaior])
                    indiceMaior = j;
            }

            int temp = vet[x];
            vet[x] = vet[indiceMaior];
            vet[indiceMaior] = temp;
        }
        

        for (int k = 0; k < Q; k++) {
            scanf("%d", &escolha);
            printf("%d\n", vet[escolha - 1]);
        }
    }
    
    return 0;
}