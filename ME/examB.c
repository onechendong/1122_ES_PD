#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num;
    int num1=1, num2=1, tmp;
    scanf("%d", &num);
    for(int i=1;i<num+1;i++){
        printf("%d ", num1);
        tmp=num1+num2;
        num1=num2;
        num2=tmp;
    }

    return 0;
}