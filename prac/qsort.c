#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int CmpFun(const void *a, const void *b){
    return(*(int*)a - *(int*)b);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    qsort(arr, n, sizeof(int), CmpFun);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}