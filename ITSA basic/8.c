#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);

    int judge = 1;

    for(int i=2;i*i<= number;i++){
        if(number % i == 0){
            judge = 0;
            break;
        }
    }

    if(judge) printf("YES\n");
    else printf("NO\n");
}