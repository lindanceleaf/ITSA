#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string a;
    char b[1000];
    getline(cin, a);
    fgets(b, 1000, stdin);
    int la = a.size();
    int lb = strlen(b);

    for(int i = 0; i < la; i++){
        printf("_%d_", a[i]);
    }
    for(int i = 0; i < lb; i++){
        printf("_%d_", b[i]);
    }
}