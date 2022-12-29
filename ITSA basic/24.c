#include <stdio.h>
#include <math.h>

int main(){
    double rate;
    int installment;
    int price;
    scanf("%lf", &rate);
    scanf("%d", &installment);
    scanf("%d", &price);

    double total_earning = 0;
    for(int i = 1; i <= installment; i++){
        total_earning += (price * pow(1 + rate, (double)i));
    }

    printf("%.d\n", (int)total_earning);
}