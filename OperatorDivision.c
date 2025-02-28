/*
Write a program that takes two integer number & display their Division result.
*/
#include<stdio.h>
int main()
{
    float division, number1, number2;
    printf("Enter two number : ");
    scanf("%f %f", &number1, &number2 );
    division = number1 / number2 ;
    printf("Answer = %f",division);
    return 0;
}