#include <stdio.h>

int main(){
    int degree;
    scanf("%d", &degree);

    float Summer_Bill = 0, Non_Summer_Bill = 0;
    // first, divide every situation by degree
    // then calculate by summer or not summer respectively
    if(degree >= 701){
        Summer_Bill += (degree - 700) * 5.63;
        Non_Summer_Bill += (degree - 700) * 4.5;
        degree = 700;
    }
    if(degree >= 501){
        Summer_Bill += (degree - 500) * 4.97;
        Non_Summer_Bill += (degree - 500) * 4.01;
        degree = 500;
    }
    if(degree >= 331){
        Summer_Bill += (degree - 330) * 4.39;
        Non_Summer_Bill += (degree - 330) * 3.61;
        degree = 330;
    }
    if(degree >= 121){
        Summer_Bill += (degree - 120) * 3.02;
        Non_Summer_Bill += (degree - 120) * 2.68;
        degree = 120;
    }
    Summer_Bill += degree * 2.1;
    Non_Summer_Bill += degree * 2.1;
    
    printf("Summer months:%.2f\n", Summer_Bill);
    printf("Non-Summer months:%.2f\n", Non_Summer_Bill);
}