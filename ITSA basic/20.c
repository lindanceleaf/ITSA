#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    //getchar();
    
    for(int i = 0; i < N; i++){
        char data[70];
        fgets(data, 70, stdin);
        char *token;
        const char delimiter[2] = " ";
        token = strtok(data, delimiter);
        int len = strlen(token);
        int *number = calloc(30, sizeof(int));
        for(int k = 29, j = len - 1; j >= 0; k--, j--){
            char temp[2];
            temp[0] = token[j];
            number[k] = atoi(temp);
        }
        token = strtok(NULL, delimiter);
        len = strlen(token) - 1;
        for(int k = 29, j = len - 1; j >= 0; k--, j--){
            char temp[2];
            temp[0] = token[j];
            number[k] += atoi(temp);
            if(number[k] >= 10){
                number[k] -= 10;
                number[k - 1]++;
            }
        }
        int start = 0;
        for(int k = 0; k < 30; k++){
            if(number[k] != 0){
                start = k;
                break;
            }
        }

        for(int k = start; k < 30; k++){
            printf("%d", number[k]);
        }
        printf("\n");
    }
}