#include <stdio.h>

int main(){
    int kilometer;
    while(scanf("%d",&kilometer) != EOF){
        // keep turn the input to the correct unit
        double miles = kilometer * 1.6;
        printf("%.1lf\n",miles);
    }
    return 0;
}