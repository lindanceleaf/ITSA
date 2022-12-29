#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d\n", &N);
    for(int i = 0; i < N; i++){
        char *data = calloc(35, sizeof(char));
        fgets(data, 35, stdin);
        int string_length = strlen(data);
        int sum = 0;
        for(int j = 0; j < string_length; j++){
            sum += data[j];
        }
        printf("%d\n", sum - 10);
    }
}