#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char data[100];

    scanf("%s",data);

    int len = strlen(data);
    bool judge = true;
    for(int i=0;i<len/2;i++){
        if(data[i] != data[len - i - 1]){ // compare from head and tail
            // once wrong then get the false answer
            judge = false;
            break;
        }
    }
    // no wrong then judge would keep true
    if(judge == true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}