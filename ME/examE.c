#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    
    if(a=='P'){
        if(b=='P'){
            printf("tie");
        }
        else if(b=='S'){
            printf("B win");
        }
        else{   //b=='R'
            printf("A win");
        }
    }
    else if(a=='S'){
        if(b=='P'){
            printf("A win");
        }
        else if(b=='S'){
            printf("tie");
        }
        else{   //b=='R'
            printf("B win");
        }
    }
    else{   //a=='R'
        if(b=='P'){
            printf("B win");
        }
        else if(b=='S'){
            printf("A win");
        }
        else{   //b=='R'
            printf("tie");
        }
    }

    return 0;
}
