#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
    char original_string[1010];
    char keywords[1000][1000];

    fgets(original_string, 1010, stdin);

    int keywords_finded_num = 0;
    const char delimiter[2] = " ";
    char *temp_string = strtok(original_string, delimiter);

    while(temp_string != NULL){
        // turn string to lower
        int str_len = strlen(temp_string);
        for(int i = 0; i < str_len; i++){
            if(!isalpha(temp_string[i])) temp_string[i] = '\0';
            else temp_string[i] = tolower(temp_string[i]);
        }

        bool have_the_same = false;
        for(int i = 0; i < keywords_finded_num; i++){
            if(strcmp(temp_string, keywords[i]) == 0){
                have_the_same = true;
                break;
            }
        }

        if(have_the_same == false){
            strcpy(keywords[keywords_finded_num], temp_string);
            keywords_finded_num++;
        }

        temp_string = strtok(NULL, delimiter);
    }

    for(int i = 0; i < keywords_finded_num; i++){
        printf("%s ", keywords[i]);
    }
}