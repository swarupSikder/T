#include <stdio.h>
int main(){
    //declare
    int x;

    //input
    scanf("%d", &x);

    printf("before: %d\n", x);

    x = x + 10;         //if x=2, x = 2+10 = 12

    printf("after: %d\n", x);

    return 0;
}