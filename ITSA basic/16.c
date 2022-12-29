#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char sub_string[150];
    scanf("%s", sub_string);
    int len_sub = strlen(sub_string);

    char target_string[550];
    scanf("%s", target_string);
    int len_target = strlen(target_string);

    int cnt_correct = 0;
    for(int i = 0; i < len_target - len_sub + 1; i++){
        bool is_correct = true;
        for(int j = 0; j < len_sub; j++){
            if(sub_string[j] != target_string[i + j]){
                is_correct = false;
                break;
            }
        }

        if(is_correct) cnt_correct ++;
    }

    printf("%d\n", cnt_correct);
}