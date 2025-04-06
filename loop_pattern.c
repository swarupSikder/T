#include <stdio.h>
int main()
{
    // for(init; con; incre){

    // }






    /*
    for(int i=10; i<=1000; i = i+10){
        printf("%d\n", i);
    }
    */






    /*
    for (int i = 1000; i >= -1010; i = i - 10)
    {
        printf("%d\n", i);
    }
    */



    //initialization
    int a=50, b=10;

    for(;;){
        //condition
        if(a==0 || b==100){
            break;
        }

        //task
        printf("a=%d b=%d\n", a, b);

        //increment or decrement
        a = a - 10;
        b = b + 10;
    }

    return 0;
}