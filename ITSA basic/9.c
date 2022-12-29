#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    while(N % 3 != 0) N--;

    printf("%d\n",(N+3)*(N/3)/2);
}