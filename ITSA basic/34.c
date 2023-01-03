#include <stdio.h>

int main(){
    int height, sex;
    while(scanf("%d %d",&height, &sex) != EOF){
        //determine what formula should be taken by sex
        if(sex == 1){
            printf("%.1f\n",(height - 80) * 0.7);
        }
        else{
            printf("%.1f\n", (height - 70) * 0.6);
        }
    }
}