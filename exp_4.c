/*
(a^2 + 2ab + b^2)
*/

#include <stdio.h>
int main(){
    //input
    int a,b;
    scanf("%d %d", &a, &b);

    //process
    int exp = a*a + 2*a*b + b*b;

    //output
    printf("%d", exp);

    return 0;
}