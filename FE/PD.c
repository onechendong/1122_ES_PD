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

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            int cmp = strcmp(dic[j], dic[j+1]);
            if(cmp > 0){
                char tmp[100];
                strcpy(tmp, dic[j]);
                strcpy(dic[j], dic[j+1]);
                strcpy(dic[j+1], tmp);
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s\n", dic[i]);
    }
    

    return 0;
}