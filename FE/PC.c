#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if( arr[i] + arr[j] ==  target){
                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}