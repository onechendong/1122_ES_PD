#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num;
    scanf("%d", &num);
    for(int n=0;n<num;n++){
        for(int i=((2*num-1)-(2*n+1))/2;i>0;i--){
            printf(" ");
        }
        for(int i=2*n+1;i>0;i--){
            printf("*");
        }
        for(int i=((2*num-1)-(2*n+1))/2;i>0;i--){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}