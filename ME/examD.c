#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int money, give;
    int back, tmp;
    scanf("%d%d", &money, &give);

    if(give<money){
        printf("not enough");
        return 0;
    }

    back=give-money;

    tmp=back/1000;
    printf("%d ", tmp);
    back=back-tmp*1000;

    tmp=back/500;
    printf("%d ", tmp);
    back=back-tmp*500;

    tmp=back/100;
    printf("%d ", tmp);
    back=back-tmp*100;

    tmp=back/50;
    printf("%d ", tmp);
    back=back-tmp*50;

    tmp=back/10;
    printf("%d ", tmp);
    back=back-tmp*10;

    tmp=back/5;
    printf("%d ", tmp);
    back=back-tmp*5;

    printf("%d ", back);
        
    return 0;
}
