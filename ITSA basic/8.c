#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);

    int judge = 1;

    // keep check whether can be divisible
    // use i*i<=number to speedup the procedure
    for(int i=2;i*i<= number;i++){
        if(number % i == 0){
            judge = 0;
            break;
        }
    }

    if(judge) printf("YES\n");
    else printf("NO\n");
}