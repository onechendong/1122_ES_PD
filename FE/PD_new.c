#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    int n;
    scanf("%d", &n);
    char dic[n][100];
    for(int i=0; i<n; i++){
        scanf("%s", dic[i]);
    }

    qsort(dic, n, sizeof(char*), strcmp);

    for(int i=0; i<n; i++){
        printf("%s\n", dic[i]);
    }
    

    return 0;
}