#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int CmpFun(const void *a, const void *b){
    return(*(char*)a - *(char*)b);
}

int main(){
    char str[100];
    scanf("%s", str);

    qsort(str, strlen(str), sizeof(char), CmpFun);

    printf("%s", str);
    return 0;
}