#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    int small;
    int ans;
    scanf("%d%d", &a, &b);

    if(a<b) small=a;
    else small=b;

    for(int i=1;i<=small;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }

    printf("%d", ans);
    return 0;
}