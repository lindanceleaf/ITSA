#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char data[10000];
    while(fgets(data, 10000, stdin) != NULL){
        float sum = 0;
        int cnt = 0;
        const char delimiter[2] = " ";
        // use strtok to cut string
        char *token = strtok(data, delimiter);
        while(token != NULL){
            // record the number num and summary them
            sum += atoi(token);
            cnt ++;

            token = strtok(NULL, delimiter);
        }
        // use the size to calculate average
        printf("Size: %d\n", cnt);
        printf("Average: %.3f\n", sum / cnt);
    }
}