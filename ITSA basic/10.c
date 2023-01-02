#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    // Euclidean algorithm by loop
    while(b){
        // keep store the new remainder and change position
        int t = b;
        b = a % b;
        a = t;
    }    

    printf("%d\n",a);
}