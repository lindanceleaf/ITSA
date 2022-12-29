#include <stdio.h>

int main(){
    int answer[4];
    for(int i = 0;i < 4;i++){
        scanf("%1d", &answer[i]);
    }

    int guest[4];
    while(1){
        for(int i = 0;i < 4;i++){
            scanf("%1d", &guest[i]);
        }
        if(guest[0] == 0 && guest[1] == 0 && guest[2] == 0&& guest[3] == 0){
            break;
        }
        int A_num = 0, B_num = 0;
        for(int i = 0; i < 4; i++){
            if(guest[i] == answer[i]) A_num ++;
            else{
                for(int j = 0; j < 4; j++){
                    if(j != i && guest[i] == answer[j]){
                        B_num ++;
                        break;
                    }
                }
            }
        }

        printf("%dA%dB\n", A_num, B_num);
    }
}