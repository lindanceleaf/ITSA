#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void print_array(int **data, int final_column, int final_row){
    for(int i = 0; i < final_row; i++){
        for(int j = 0; j < final_column; j++){
            if(data[i][j])printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int command, steps;
    bool pen_down = false;
    int **data = malloc(50 * sizeof(int *));
    for(int i = 0; i < 50; i++) data[i] = calloc(50, sizeof(int));
    int direction = 0; // 0 for right, 1 for down, 2 for left, 3 for up
    int place_x = 0, place_y = 0;
    int final_row = -1;
    int final_column = -1;
    while(1){
        char original_string[10];
        scanf("%s", original_string);
        if(strlen(original_string) == 1) command = atoi(original_string);
        else{
            const char delimiter[2] = ",";
            char *token = strtok(original_string, delimiter);
            command = atoi(token);
            token = strtok(NULL, delimiter);
            steps = atoi(token);
        }
        if(command == 9) break;
        switch(command){
            case 1:
                pen_down = false;
                break;
            case 2:
                pen_down = true;
                break;
            case 3:
                direction++;
                direction %= 4;
                break;
            case 4:
                direction += 3;
                direction %= 4;
                break;
            case 5:
                for(int i = 0; i < steps; i++){
                    if(pen_down){
                        data[place_x][place_y] = 1;
                        if(place_x > final_row) final_row = place_x;
                        if(place_y > final_column) final_column = place_y;
                    }
                    switch(direction){
                        case 0: place_y++; break;
                        case 1: place_x++; break;
                        case 2: place_y--; break;
                        case 3: place_x--; break;
                    }
                }
                break;
            case 6:
                print_array(data, final_column + 1, final_row + 1);
                break;
        }
    }
}