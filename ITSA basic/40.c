#include <stdio.h>

int main(){
    char data;
    int sum = 0;
    for(int i = 10;i > 0;i--){
        scanf(" %c",&data);

        // turn number of char to number
        if(data >= '0' && data <= '9'){
            sum += (data - 48) * i;
        }
        // turn X into 10
        else if(data == 'X'){
            sum += 10 * i;
        }
    }
    // judge whether is legal
    if(sum % 11){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}