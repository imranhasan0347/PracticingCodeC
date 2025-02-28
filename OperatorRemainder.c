/*
Write a program that takes two integer number & display their remainder result.
*/
#include<stdio.h>
int main()
{
    int remainder, number1, number2;
    printf("Enter two number : ");
    scanf("%d %d", &number1, &number2 );
    remainder = number1 % number2 ;
    printf("Answer = %d",remainder);
    return 0;
}