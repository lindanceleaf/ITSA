#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char data[101];
    fgets(data, 101, stdin);

    char Upper_str[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Lower_str[52] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    char Number[20] = "01234567890123456789";


    int num;
    scanf("%d", &num);

    int str_length = strlen(data);
    for(int i = 0; i < str_length; i++){
        if(data[i] >= 65 && data[i] <= 90){
            for(int j = 0; j < 26; j++){
                if(data[i] == Upper_str[j]){
                    printf("%c", Upper_str[j + (num % 26)]);
                    break;
                }
            }
        }
        else if(data[i] >= 97 && data[i] <= 122){
            for(int j = 0; j < 26; j++){
                if(data[i] == Lower_str[j]){
                    printf("%c", Lower_str[j + (num % 26)]);
                    break;
                }
            }
        }
        else if(data[i] >= 48 && data[i] <= 57){
            for(int j = 0; j < 10; j++){
                if(data[i] == Number[j]){
                    printf("%c", Number[j + (num % 10)]);
                }
            }
        }
        else{
            printf("%c", data[i]);
        }
    }
}