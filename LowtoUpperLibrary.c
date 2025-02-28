/*
Write a program that convert a lowercase letter to uppercase letter using library function.Withiout ASCII value.
*/
#include<stdio.h>
int main()
{
    printf("toupper is a library function that convert a lowercase letter to uppercase letter.\n");
    char lower,upper;
    printf("Enter any lowercase letter:");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("Upper letter is: '%c'",upper);
    return 0;
}