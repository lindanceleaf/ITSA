#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    // to find the max num that can be quotion by 3
    while(N % 3 != 0) N--;

    // use formula to calculte the result
    printf("%d\n",(N+3)*(N/3)/2);
}