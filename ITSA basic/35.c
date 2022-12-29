#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int budget, employee, object;
        scanf("%d %d %d", &budget, &employee, &object);

        int *price = malloc(object * sizeof(int));
        for(int j = 0; j < object; j++){
            scanf("%d", &price[j]);
        }

        // bubble sort O(n^2)
        for(int i = 0; i < object - 1; i++){
            for(int j = 0; j < object - i - 1; j++){
                if(price[j] > price[j+1]){
                    int temp = price[j];
                    price[j] = price[j+1];
                    price[j+1] = temp;
                }
            }
        }

        int cost = 0;
        for(int j = 0; j < employee; j++){
            cost += price[j];
        }

        if(cost <= budget) printf("%d\n", cost);
        else printf("Impossible\n");
    }
}