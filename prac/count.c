#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 5

int main(){
    int arr[SIZE];
    int max, min;
    float sum = 0, avg = 0;
    for(int i=0; i<SIZE; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    max = arr[0];
    min = arr[0];
    avg = sum/5;
    for(int i=0; i<SIZE; i++){
        if(arr[i]<min)  min = arr[i];
        if(arr[i]>max)  max = arr[i];
    }

    printf("%.0f %.1f %d %d", sum, avg, max, min);

    return 0;
}