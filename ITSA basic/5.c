#include <stdio.h>

int main(){
    int data;
    scanf("%d", &data);
    int bin[8] = {0};

    // to solve the negative number
    // to let it can do like positive number
    if(data < 0){
        data += 256;
    }

    // keep use %2 to get the last binary number
    // and then reverse it
    for(int i=7;i>=0;i--){
        bin[i] = data % 2;
        data /= 2;
    }

    for(int i=0; i<8;i++){
        printf("%d",bin[i]);
    }
    printf("\n");
    return 0;
}