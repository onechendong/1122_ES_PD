#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float num1, num2;
    char oper;
    scanf("%f%f", &num1, &num2);
    scanf(" %c", &oper);

    switch (oper)
    {
    case '+':
        printf("%.1f", (num1+num2));
        break;

    case '-':
        printf("%.1f", (num1-num2));
        break;

    case '*':
        printf("%.1f", (num1*num2));
        break;

    default:
        printf("%.1f", (num1/num2));
        break;
    }

    return 0;
    
}