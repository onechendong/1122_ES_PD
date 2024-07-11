#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 5

int main(){
    int arr[SIZE][SIZE], new_arr[SIZE][SIZE]={0};
    for(int row=0; row<SIZE; row++){
        for(int col=0; col<SIZE; col++){
            scanf("%d", &arr[row][col]);
        }
    }

    for(int row=0; row<SIZE; row++){
        for(int col=0; col<SIZE; col++){
            if(row==col)    new_arr[row][col] = arr[row][col];
            else    new_arr[col][row] = arr[row][col];
        }
    }

    for(int row=0; row<SIZE; row++){
        for(int col=0; col<SIZE; col++){
            printf("%d ", new_arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}