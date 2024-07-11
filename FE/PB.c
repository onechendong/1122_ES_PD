#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int Fibonacci(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return(Fibonacci(a-1) + Fibonacci(a-2));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int tmp = Fibonacci(arr[i])%19;
        tmp = tmp*tmp - 7*tmp + 15;
        printf("%d\n", tmp);
    }

    return 0;
}