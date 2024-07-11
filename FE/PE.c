#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr1[a][b], arr2[b][c];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i=0; i<b; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("m1:\n");
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("m2:\n");
    for(int i=0; i<b; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("m1m2:\n");
    int ans[a][c];

    for(int i=0; i<a; i++){
        for(int j=0; j<c; j++){
            ans[i][j] = 0;
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            for(int k=0; k<c; k++){
                ans[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }


    for(int i=0; i<a; i++){
        for(int j=0; j<c; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }


    return 0;
}

/*
2*3
00 01 02
10 11 12

3*4
00 01 02 03
10 11 12 13
20 21 22 23

2*4
00/00+01/10+02/20 00/01+01/11+02/21 00/02+01/12+02/22 ...
10/00+11/10+12/20 ...

*/