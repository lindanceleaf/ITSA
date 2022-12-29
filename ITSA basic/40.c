#include <stdio.h>

int main(){
    char data;
    int sum = 0;
    for(int i = 10;i > 0;i--){
        scanf(" %c",&data);

        if(data >= '0' && data <= '9'){
            sum += (data - 48) * i;
        }
        else if(data == 'X'){
            sum += 10 * i;
        }
    }
    if(sum % 11){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}