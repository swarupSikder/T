#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if(50 < num && num < 100){
        printf("In Range\n");
    }
    else{
        printf("Out of Range\n");
    }

    return 0;
}