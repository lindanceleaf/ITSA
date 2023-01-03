#include <stdio.h>

int main(){
    float data,max,min;
    scanf("%f",&data);
    // initailize max and min to the first data
    max = data, min = data;
    for(int i = 0;i<9;i++){
        scanf("%f",&data);
        // get max and min at one loop
        if(data > max) max = data;
        if(data < min) min = data;
    }

    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
}