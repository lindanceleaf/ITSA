#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int pow(int base, int power){
    int result = 1;
    if(power == 0) return 1;
    for(int i = 0; i < power; i++){
        result *= base;
    }
    return result;
}

int main(){
    int special_prize;
    int number[3];
    scanf("%d", &special_prize);
    for(int i = 0; i < 3; i++){
        scanf("%d", &number[i]);
    }

    int N;
    int *match = calloc(7, sizeof(int));
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int invoice;
        scanf("%d", &invoice);

        if(invoice == special_prize) match[0] ++;
        else{
            for(int j = 8; j >= 3; j--){
                bool win = false;
                for(int k = 0; k < 3; k++){
                    if(number[k] % pow(10, j) == invoice % pow(10, j)){
                        win = true;
                        match[8 - j + 1] ++; 
                    }
                }
                if(win) break;
            }
        }
    }

    for(int i = 0; i < 6; i++){
        printf("%d ", match[i]);
    }
    printf("%d\n", match[6]);

    int win_prize = 0;
    win_prize += match[0] * 2000000;
    win_prize += match[1] * 200000;
    win_prize += match[2] * 40000;
    win_prize += match[3] * 10000;
    win_prize += match[4] * 4000;
    win_prize += match[5] * 1000;
    win_prize += match[6] * 200;
    printf("\n%d\n", win_prize);
}   