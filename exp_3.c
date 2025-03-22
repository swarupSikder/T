/*
(a^2 + b^2)c
*/

#include <stdio.h>
int main(){
    //input
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    //process
    int exp = (a*a + b*b)*c;

    //output
    printf("%d", exp);

    return 0;
}