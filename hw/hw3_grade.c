#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float grade, new_grade;
    scanf("%f", &grade);
    new_grade=round(grade*0.8+20);
    grade=round(grade);
    
    printf("%.0f ", grade);
    if(grade>89){
        printf("A\n");
    }
    else if(grade>79){
        printf("B\n");
    }
    else if(grade>69){
        printf("C\n");
    }
    else if(grade>59){
        printf("D\n");
    }
    else {
        printf("E\n");
    }

    printf("%.0f ", new_grade);
    if(new_grade>89){
        printf("A\n");
    }
    else if(new_grade>79){
        printf("B\n");
    }
    else if(new_grade>69){
        printf("C\n");
    }
    else if(new_grade>59){
        printf("D\n");
    }
    else {
        printf("E\n");
    }

    return 0;
}
