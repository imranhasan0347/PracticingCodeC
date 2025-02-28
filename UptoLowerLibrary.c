/*
Write a program that convert a Uppercase letter to lowercase letter using library function. Without using ASCII value.
*/
#include<stdio.h>
int main ()
{
    printf("tolower is a library function that convert a  uppercase letter to  lowercase letter.");
    char upper,lower;
    printf("\nEnter a Uppercase letter: ");
    scanf("%c",&upper);
    lower= tolower(upper);
    printf("Lowercase letter is: '%c'",lower);
    return 0;
}