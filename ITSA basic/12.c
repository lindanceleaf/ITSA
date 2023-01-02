#include <stdio.h>

int f(int x){
    // when x is 0 or 1, return result (x+1)
    if(x == 0 || x == 1){
        return x+1;
    }
    // if x is bigger than 2, use recursion function to get result
    else{
        return f(x-1) + f(x/2);
    }
}

int main(){
    int k = 0;
    scanf("%d",&k);

    printf("%d\n",f(k));
}