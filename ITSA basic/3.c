#include <stdio.h>

int main(){
    int X, Y;
    while(scanf("%d %d", &X, &Y) != EOF){
        if(X*X + Y*Y <= 20000){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}