#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char keyboard[8][15] = {
        "`1234567890-=",
        "~!@#$%%^&*()_+",
        "qwertyuiop[]\\",
        "{}|",
        "asdfghjkl;\'",
        ":\"",
        "zxcvbnm,./",
        "<>?"
    };
    
    char data[1000];
    scanf("%s", data);
    int len = strlen(data);
    for(int i = 0; i < len; i++){
        if(isalpha(data[i])) data[i] = tolower(data[i]);

        for(int j = 0; j < 8; j++){
            char *token = strchr(keyboard[j], data[i]);
            if(token != NULL){
                printf("%c", *(token + 1));
                break;
            }
        }
    }
}