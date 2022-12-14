#include <stdio.h>

int main(){
    int data[4];

    for(int i = 0; i < 4;i++){
        scanf("%d",&data[i]);
    }

    // sort the input
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3 - i;j++){
            if(data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    // if all the same then win
    if(data[0] == data[1] && data[1] == data[2] && data[2] == data[3]){
        printf("WIN\n");
    }
    // three different -> R
    else if((data[0] == data[1] && data[1] == data[2]) || (data[1] == data[2] && data[2] == data[3])){
        printf("R\n");
    }
    // four different -> R
    else if(data[3] > data[2] && data[2] > data[1] && data[1] > data[0]){
        printf("R\n");
    }
    // sum the point
    else{
        if(data[0] == data[1]){
            printf("%d\n",data[2] + data[3]);
        }
        else if(data[1] == data[2]){
            printf("%d\n",data[0] + data[3]);
        }
        else{
            printf("%d\n", data[0] + data[1]);
        }
    }
}