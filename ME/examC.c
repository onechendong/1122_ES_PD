#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("uppercase letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("lowercase letter");
    }
    else if(ch>='0' && ch<='9'){
        printf("digit");
    }
    else{
        printf("symbol");
    }
       
    return 0;
}
