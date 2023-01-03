#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char data[10000];
    while(fgets(data, 10000, stdin) != NULL){
        int *number = calloc(10000, sizeof(int));
        int cnt = 0;
        const char delimiter[2] = " ";
        // use strtok to get every number's string
        char *token = strtok(data, delimiter);
        while(token != NULL){
            // turn the string to number
            // and record the times of appearance
            number[cnt] = atoi(token);
            cnt ++;
            token = strtok(NULL, delimiter);
        }
        // sort
        for(int i = 0; i < cnt - 1; i++){
            for(int j = 0; j < cnt - 1 - i; j++){
                if(number[j] > number[j + 1]){
                    int temp = number[j];
                    number[j] = number[j + 1];
                    number[j + 1] = temp;
                }
            }
        }

        int target = number[cnt / 2];
        int start;
        for(int i = 0;;i++){
            if(number[i] == target){
                start = i;
                break;
            }
        }
        int end = -2;
        for(int i = start + 1; i < cnt; i++){
            if(number[i] != target){
                end = i - 1;
                break;
            }
        }
        if(end == -2) end = cnt - 1;

        if(end - start + 1 > cnt / 2)printf("%d\n", target);
        else printf("NO\n");
    }
}