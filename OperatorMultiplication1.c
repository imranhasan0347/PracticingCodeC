/*
Write a program that takes three integer number & display their Multipication result.
*/
#include<stdio.h>
int main()
{
    int number1, number2, number3, multiplication;
    printf("Enter thrree number : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    multiplication = number1 * number2 * number3;
    printf("Answer = %d",multiplication);
    return 0;
}