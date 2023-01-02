#include <stdio.h>

int main(){
    int row, column;
    scanf("%d %d",&row, &column);

    // get the original matrix
    int data[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&data[i][j]);
        }
    }

    // print along with column not row
    for(int j=0;j<column;j++){
        for(int i=0;i<row-1;i++){
            printf("%d ",data[i][j]);
        }
        // to fit strict comparison
        printf("%d\n",data[row-1][j]);
    }
}