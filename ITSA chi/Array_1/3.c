#include <stdio.h>

int main(){
    long long int sum = 0;
    for(int i = 0; i < 6; i++){
        long long int temp;
        scanf("%lld", &temp);

        sum += (temp * temp * temp);
    }
    printf("%lld\n", sum);
}