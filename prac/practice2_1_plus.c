#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num, sum=0;
    scanf("%d", &num);
    for(int i=1;i<num+1;i+=2){
        sum+=i;
    }

    printf("%d", sum);

    return 0;
}