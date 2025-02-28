/*
Write a program that takes three integer number  & display their sum.
*/
#include<stdio.h>
int main()
{
    int number1, number2, number3, sum;
    printf("Enter thrree number : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    sum = number1 + number2 + number3;
    printf("Answer = %d",sum);
    return 0;
}