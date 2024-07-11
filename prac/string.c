#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    int num;
    scanf("%d", &num);
    char arr[num][100];
    int count[num][2];
    for(int i=0; i<num; i++){
        scanf("%s", arr[i]);
    }

    for(int i=0; i<num; i++){
        count[i][0] = 0;
        count[i][1] = 0;
    }
    for(int i=0; i<num; i++){
        count[i][0] = strlen(arr[i]);
        for(int j=0; j<strlen(arr[i]); j++){
            if((arr[i][j]>='a' && arr[i][j]<='z') || (arr[i][j]>='A' && arr[i][j]<='Z')){
                count[i][1]++;
            }
        }
    }

    for(int i=0; i<num; i++){
        printf("L=%d\nM=%d\n", count[i][0], count[i][1]);
    }

    return 0;
}