#include<stdio.h>
#include <string.h>
#define MAX_LENGTH 51


    
void bubbleSort(char arr[][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n; j++) {

            int len1 = strlen(arr[j - 1]); //anterior
            int len2 = strlen(arr[j]);  // atual
            if (len1 < len2) {
                char temp[MAX_LENGTH];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j - 1]);
                strcpy(arr[j - 1], temp);
            }
        }
    }
}


void processar(char *v){
    int count = 0;
    for(int i = 0; i<MAX_LENGTH; i++){
        if(v[i] == ' '){
            count++;
        }
    }
    int tamanho = count+1;
    char palavras[tamanho][MAX_LENGTH];
    int tamanhos[tamanho];
    int j=0,t=0;
    for(int i = 0; i<MAX_LENGTH; i++){
        if(v[i]=='\0')
            break;
        if(v[i] == ' '){
            palavras[j][t]='\0'; 
            t = 0;
            j++;
            continue;
        }
        palavras[j][t] = v[i]; 
        t++;
    }
    palavras[j][t]= '\0';
    bubbleSort(palavras,tamanho);
    printf("%s", palavras[0]);
    for(int i =1; i<tamanho; i++){
        printf(" %s",palavras[i]);
    }
    printf("\n");
    
}



int main(){
    int N, count; 
    scanf("%d ",&N);
    
    for(int i =0; i<N; i++){
        char linha[MAX_LENGTH] = "\0";
        scanf(" %100[^\n]", linha);
        processar(linha);
    }
 
}