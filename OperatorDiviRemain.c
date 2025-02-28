/*
Write a program that takes two integer number & display their Division result.
*/
#include<stdio.h>
int main()
{
    int division,remian, number1, number2;
    printf("Enter two number : ");
    scanf("%d %d", &number1, &number2 );
    division = number1 / number2 ;
    printf("Result = %d",division);
    remian= number1 % number2 ;
    printf("\nRemain = %d",remian);
    return 0;
}