/*
Write a program that convert a uppercase letter to lowercase letter without using library function. 
*/
#include<stdio.h>
int main()
{
    char Uppercase;
    printf("Enter a uppercase letter:");
    scanf("%c",&Uppercase);
    printf("The lowercase letter is: '%c'\n",Uppercase + 32);
    printf("Difference between ASCII value of lowercase & uppercase letter is 32.EX:a=97,A=65\nSo, we plus 32 from lower case.");
    return 0;
}