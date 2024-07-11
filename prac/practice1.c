#include<stdio.h>
#include<stdlib.h>

int main(){
    int year;
    char name[10];

    scanf("%d %s", &year, name);
    printf("%s is %d years old. \n", name, year);
    return 0;
}