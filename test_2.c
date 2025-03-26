/*
question: 
you have to two float number. And do a simple
calculation.

step 1: you have to multiply those numbers and store
        the value in another variable

step 2: you have to store the square value of that last variable in
        another variable

step 3: simply print the ultimate result

input: 
12 34.67

output: 
RESULT = 173089.2816
*/

#include <stdio.h>
int main(){
    float a,b;
    scanf("%f %f", &a, &b);

    float result1 = a*b;
    float result2 = result1*result1;

    printf("RESULT = %f\n", result2);

    return 0;
}