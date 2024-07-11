#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, sum=0;
    while(sum<150){
        scanf("%d", &num);
        if(num>=1&&num<=9){
            sum+=num*num;
        }
        else{
            printf("Error");
            return 0;
        }
    }

    printf("%d", sum);
    return 0;
}
