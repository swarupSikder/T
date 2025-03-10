#include <stdio.h>
int main(){
    int a,b;
    a = 20;
    b = 30;

    printf("%d + %d = %d\n", a, b, a+b);
    //quote er vetorer + ba = sign er kono value nai
    //era sudhu presentation er jonno use kora hoy

    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);

    //jodi fraction show koratei hoy,
    //tahole %d er bodole %lf dite hobe
    //abar vaag korar somoye float e convert kore nite hobe
    printf("%d / %d = %lf\n", a, b, (float) a/b);

    return 0;
}