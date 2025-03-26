#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    char nextChar = ch+1;
    
    printf("ASCII value of %c : %d\n", nextChar, nextChar);
    

    return 0;
}