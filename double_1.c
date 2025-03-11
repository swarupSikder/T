#include <stdio.h>
int main(){
    double x;
    scanf("%lf", &x);

    //calc
    x = x/3;

    printf("%0.14lf", x);

    return 0;
}