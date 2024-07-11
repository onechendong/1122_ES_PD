#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int num;
    scanf("%d", &num);

    for(int i=1;i<num+1;i++){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=num-1;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}