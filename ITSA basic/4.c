#include <stdio.h>

int main(){
    int in_hour, in_min, out_hour, out_min;
    scanf("%d %d", &in_hour, &in_min);
    scanf("%d %d", &out_hour, &out_min);

    // turn the time to the same unit
    int total_in_min = 60 * in_hour + in_min;
    int total_out_min = 60 * out_hour + out_min;
    int total_min = total_out_min - total_in_min;

    // divide the time to convert the different cost rate
    int price = 0;
    if(total_min < 120){
        while(total_min >= 30){
            price += 30;
            total_min -= 30;
        }
    }
    else if(total_min < 240){
        price = 120;
        total_min -= 120;
        while(total_min >= 30){
            price += 40;
            total_min -= 30;
        }
    }
    else{
        price = 280;
        total_min -= 240;
        while(total_min >= 30){
            price += 60;
            total_min -= 30;
        }
    }
    printf("%d\n", price);

    return 0;
}