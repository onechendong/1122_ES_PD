#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int num;
    bool prime=true;
    scanf("%d", &num);
    for(int i=2;i<num/2+2;i++){
        if(num%i==0){
            prime=false;
            break;
        }
    }

    if(prime==true){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}