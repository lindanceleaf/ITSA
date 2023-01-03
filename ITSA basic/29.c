#include <stdio.h>

int main(){
    char head;
    int N[9];
    scanf("%c", &head);
    for(int i = 0; i < 9 ;i ++){
        scanf("%1d", &N[i]);
    }

    // use many condition to get the right number
    if(head == 'I') head = 34;
    else if(head == 'O') head = 35;
    else{
        if(head <= 'H' || head == 'W') head -= 55;
        else if(head <= 'N') head -= 56;
        else if(head == 'X' || head == 'Y') head -= 58;
        else head -= 57;
    }

    // start to add every number times their weight
    int s = (head / 10) + (9 * (head % 10));
    for(int i = 8; i > 0; i--){
        s += (i * N[8 - i]);
    }
    s += N[8];

    // check whether is correct
    if((N[0] == 1 || N[0] == 2) && (s % 10 == 0)) printf("CORRECT!!!\n");
    else printf("WRONG!!!\n");
}   