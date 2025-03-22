/*
a^3 + 3ab(a+b+c)
*/

#include <stdio.h>
int main(){
    //input
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    //process
    int exp = a*a*a + 3*a*b*(a+b+c);

    //output
    printf("%d", exp);

    return 0;
}