#include <stdio.h>

int main(){
    int row, column;
    scanf("%d %d",&row, &column);

    int data[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&data[i][j]);
        }
    }

    for(int j=0;j<column;j++){
        for(int i=0;i<row-1;i++){
            printf("%d ",data[i][j]);
        }
        printf("%d\n",data[row-1][j]);
    }
}