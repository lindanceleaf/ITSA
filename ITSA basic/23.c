#include <stdio.h>

int main(){
    int N, a, b, c;
    scanf("%d,%d,%d,%d", &N, &a, &b, &c);

    N -= (a*15 + b*20 + c*30);
    if(N < 0) printf("0\n");
    else{
        c = N / 50;
        N %= 50;
        b = N / 5;
        N %= 5;
        a = N;
        printf("%d,%d,%d\n", a, b, c);
    }
}