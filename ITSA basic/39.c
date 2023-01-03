#include <stdio.h>

int main(){
    int sets;
    scanf("%d",&sets);

    for(int i = 0; i < sets; i++){
        int L, R, S;
        scanf("%d %d %d", &L, &R, &S);

        char pass_number = 0;
        // calculate number of pass
        if(L >= 60) pass_number ++;
        if(R >= 60) pass_number ++;
        if(S >= 60) pass_number ++;

        // judge pass condition
        if(pass_number == 3 || (pass_number == 2 && L + R + S >= 220)){
            printf("P\n");
        } // judge make-up exam condition
        else if(pass_number == 2 || (pass_number == 1 && (L >= 80 || R >= 80 || S >= 80))){
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }
}