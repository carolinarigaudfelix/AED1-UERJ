#include <stdlib.h>
#include <stdio.h>
#define MAX 251

void countingSort(int *arr, int N){
    int i, j, k;
    int alturas[MAX];
    for(i=0; i<MAX; i++)
        alturas[i] = 0;
    
    for(i=0; i<N; i++)
        alturas[arr[i]]++;

    for(i = 0, j = 0; j < MAX; j++){
        for(k = alturas[j]; k>0; k--)
            arr[i++] = j;
    }
}

int main() {
    int NC;
    scanf("%d", &NC);

    for (int z = 0; z < NC; z++) {
        int N;
        scanf("%d", &N);

        int *alturas = malloc(N * sizeof(int));

        for (int i = 0; i < N; i++) {
            scanf("%d", &alturas[i]);
        }
        countingSort(alturas, N);
        for (int k = 0; k < N; k++) {
            printf("%d ", alturas[k]);
            if (k != N - 1)
                printf(" ");
        }
        printf("\n");
        free(alturas);
    }

    return 0;
}