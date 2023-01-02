#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++){
        // use matrix to store what is had
        int data[4][13];
        memset(data, 0, sizeof(int) * 4 * 13);
        
        char str[1000];
        fgets(str, 1000, stdin);
        char flower;
        int number;
        const char token[2] = " ";
        // use strtok to get every card
        char *temp = strtok(str, token);
        int cnt = 0;
        while(temp != NULL){
            // use sscanf to get data from string
            sscanf(temp, "%c%d", &flower, &number);
            int map;
            if(flower == 'S') map = 0;
            else if(flower == 'H') map = 1;
            else if(flower == 'D') map = 2;
            else map = 3;
            data[map][number - 1] = 1;
            cnt++;
            temp = strtok(NULL, token);
        }
        
        char print_flower;
        // print follow the rule
        for(int j = 0; j < 4; j++){
            if(j == 0) print_flower = 'S';
            else if(j == 1) print_flower = 'H';
            else if(j == 2) print_flower = 'D';
            else print_flower = 'C';
            for(int k = 12; k >= 0; k--){
                if(data[j][k] == 1){
                    printf("%c%d", print_flower, k+1);
                    cnt--;
                    if(cnt) printf(" ");
                }
            }
        }
        printf("\n");
    }
}