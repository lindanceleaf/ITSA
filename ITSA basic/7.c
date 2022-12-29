#include <stdio.h>

int main(){
    // get the number of testcase
    int times;
    scanf("%d\n",&times);

    for(int i=0;i<times;i++){
        char operator;
        int a1,b1,a2,b2;
        scanf(" %c %d %d %d %d",&operator,&a1,&b1,&a2,&b2);

        switch(operator){
            case '+':
                printf("%d %d\n",a1 + a2, b1 + b2);
                break;
            case '-':
                printf("%d %d\n",a1-a2,b1-b2);
                break;
            case '*': 
                // the imagianry number multiply can be negative then real number
                // so a1 * a2 would minus b1 * b2
                printf("%d %d\n",a1 * a2 - b1 * b2, a1*b2 + a2*b1);
        }
    }
}