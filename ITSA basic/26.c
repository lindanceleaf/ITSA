#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int data[N];
    int mean_value[N];
    for(int i = 0; i < N; i++){
        int number;
        scanf("%d", &number);
        data[i] = number;

        // use sum to record sum of digits
        int sum = 0;
        while(number){
            sum += number % 10;
            number /= 10;
        }
        // store it to an array
        mean_value[i] = sum;
    }

    // sort by the sum of digits
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(mean_value[j] > mean_value[j + 1]){
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                temp = mean_value[j];
                mean_value[j] = mean_value[j + 1];
                mean_value[j + 1] = temp;
            }
            else if(mean_value[j] == mean_value[j + 1] && data[j] > data[j + 1]){
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                temp = mean_value[j];
                mean_value[j] = mean_value[j + 1];
                mean_value[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < N - 1; i++){
        printf("%d ", data[i]);
    }
    printf("%d\n", data[N - 1]);
}