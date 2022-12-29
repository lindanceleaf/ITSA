#include <stdio.h>
#include <stdbool.h>

int main(){
    int match[3][3];
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%1d",&match[i][j]);
        }
    }
    bool win = false;
    for(int i = 0;i<3;i++){
        if(match[i][0] == match[i][1] && match[i][1] == match[i][2]){
            win = true;
        }
        else if(match[0][i] == match[1][i] && match[1][i] == match[2][i]){
            win = true;
        }
        else if(match[0][0] == match[1][1] && match[1][1] == match[2][2]){
            win = true;
        }
        else if(match[2][0] == match[1][1] && match[1][1] == match[0][2]){
            win = true;
        }
    }

    if(win == true){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}