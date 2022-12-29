#include <stdio.h>

int main(){
    char data[4];
    scanf("%s",&data);

    // build the table that can show every words
    char example[10][5][5] = {
        {
            // 0
            {"*****"},
            {"*   *"},
            {"*   *"},
            {"*   *"},
            {"*****"}
        },{
            // 1
            {"    *"},
            {"    *"},
            {"    *"},
            {"    *"},
            {"    *"}
        },{
            // 2
            {"*****"},
            {"    *"},
            {"*****"},
            {"*    "},
            {"*****"}
        },{
            // 3
            {"*****"},
            {"    *"},
            {"*****"},
            {"    *"},
            {"*****"}
        },{
            // 4
            {"*   *"},
            {"*   *"},
            {"*****"},
            {"    *"},
            {"    *"}
        },{
            // 5
            {"*****"},
            {"*    "},
            {"*****"},
            {"    *"},
            {"*****"}
        },{
            // 6
            {"*****"},
            {"*    "},
            {"*****"},
            {"*   *"},
            {"*****"}
        },{
            // 7
            {"*****"},
            {"    *"},
            {"    *"},
            {"    *"},
            {"    *"}
        },{
            // 8
            {"*****"},
            {"*   *"},
            {"*****"},
            {"*   *"},
            {"*****"}
        },{
            // 9
            {"*****"},
            {"*   *"},
            {"*****"},
            {"    *"},
            {"    *"}
        }
    };
    
    // turn every words to what we want to show from the table
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<5;k++){
                printf("%c",example[data[j] - 48][i][k]);
            }
            if(j != 3){
                printf(" ");
            }
        }
        printf("\n");
    }
}