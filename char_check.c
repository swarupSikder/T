#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if(ch == '0'){
        printf("Yes! Correct Password");
    }
    else{
        printf("Sorry! incorrect Password");
    }

    return 0;
}