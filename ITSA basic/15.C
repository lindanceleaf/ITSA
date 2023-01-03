#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char data[1000];
    fgets(data, 1000, stdin);

    // use array to store times that every character appear
    int *cnt = (int *)calloc(26, sizeof(int));
    int word_num = 0;
    const char delimiter[2] = " ";
    // use strtok to split the string and count words
    char *token = strtok(data, delimiter);
    while(token != NULL){
        word_num ++;
        int len = strlen(token);
        for(int i =  0; i < len; i++){
            if(isalpha(token[i])){
                cnt[toupper(token[i]) - 65] ++;
            }
        }

        token = strtok(NULL, delimiter);
    }

    printf("%d\n", word_num);
    for(int i = 0; i < 26; i++){
        if(cnt[i]){
            printf("%c : %d\n", i + 97, cnt[i]);
        }
    }

}