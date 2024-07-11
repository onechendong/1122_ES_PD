#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num, sum=0;
    scanf("%d", &num);
    for(int i=1;i<num+1;i++){
        if(i%2==0){
            sum-=i*i;
        }
        else{
            sum+=i*i;
        }
    }

    printf("%d", sum);

    return 0;
}