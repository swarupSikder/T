/*
(a+b)/(a-b)
*/

#include <stdio.h>
int main(){
    //input
    int a,b;
    scanf("%d %d", &a, &b);

    //process
    int exp = (a+b)/(a-b);

    //output
    printf("%d", exp);

    return 0;
}