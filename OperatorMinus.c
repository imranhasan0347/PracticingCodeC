/*
Write a program that takes two integer number & display their Substruction result.
*/
#include<stdio.h>
int main()
{
    int number1, number2, substruction;
    printf("Enter two number : ");
    scanf("%d %d", &number1, &number2);
    substruction = number1 - number2;
    printf("Answer = %d",substruction);
    return 0;
}