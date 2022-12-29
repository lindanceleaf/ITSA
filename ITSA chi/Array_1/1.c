#include <stdio.h>

int main(){
    int data[100];
    int cnt = 0;
    while(scanf("%d", &data[cnt]) != EOF) cnt ++;
    for(int i = cnt - 1; i >= 0; i--){
        printf("%d", data[i]);
        if(i != 0) printf(" ");
    }
    printf("\n");
}