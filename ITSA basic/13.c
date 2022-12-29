#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int times;
    scanf("%d\n",&times);

    for(int i = 0; i < times; i++){
        char data[500];
        fgets(data, 500, stdin);

        int number[4][13] = {0};
        int cnt[4] = {0};
        int len = strlen(data);
        
        char card;
        int card_number;
        bool carry = false;
        int count = 0;
        int output_number[52];
        char output_suit[52];
        for(int j = 0; j < len; j++){
            if(data[j] >= 65 && data[j] <= 90){
                card = data[j];
            }
            else if(data[j] >= 48 && data[j] <= 57){
                if(carry == false){
                    card_number = data[j] - 48;
                    carry = true;
                }
                else{
                    card_number = card_number * 10 + data[j] - 48;
                    carry = false;
                }
            }
            else{
                carry = false;
                if(card == 'S'){
                    number[0][cnt[0]] = card_number;
                    cnt[0] ++;
                }
                else if(card == 'H'){
                    number[1][cnt[1]] = card_number;
                    cnt[1] ++;
                }
                else if(card == 'D'){
                    number[2][cnt[2]] = card_number;
                    cnt[2] ++;
                }
                else if(card == 'C'){
                    number[3][cnt[3]] = card_number;
                    cnt[3] ++;
                }
            }
        }

        for(int j = 0; j < 4; j++){
            for(int k = 0; k < cnt[j] - 1; k++){
                for(int l = 0; l < cnt[j] - k - 1; l++){
                    if(number[j][l] < number[j][l+1]){
                        int temp = number[j][l];
                        number[j][l] = number[j][l+1];
                        number[j][l+1] = temp;
                    }
                }
            }
            
            char suit;
            if(j == 0) suit = 'S';
            else if(j == 1) suit = 'H';
            else if(j == 2) suit = 'D';
            else if(j == 3) suit = 'C';
            
            for(int k = 0; k < cnt[j]; k++){
                output_suit[count] = suit;
                output_number[count] = number[j][k];
                count++;
            }
        }
        
        //printf("%c%d",output_suit[0], output_number[0]);
        for(int j = 0; j < count; j++){
            if(j != 0) printf(" ");
            printf("%c%d",output_suit[j], output_number[j]);
        }
        printf("\n");
    }
}