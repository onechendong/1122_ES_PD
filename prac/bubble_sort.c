#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void BubbleSort(char[], int);

int main(){
    int size;
    scanf("%d", &size);
    char arr[size];
    
    for(int i=0; i<size; i++){
        scanf("%c", &arr[i]);
    }

    for(int i=0; i<size; i++){
        printf("%c. ", arr[i]);
    }
    printf("\n");

    BubbleSort(arr, size);

    for(int i=0; i<size; i++){
        printf("%c. ", arr[i]);
    }

    return 0;
}

void BubbleSort(char array[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(array[j]>array[j+1]){
                char tmp;
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}