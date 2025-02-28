/*
Write a program that swap two numbers with temporary varriable.
*/
#include<stdio.h>
int main()
{
    int num1=20;
    int num2=15, temp;
    temp = num1;   //Mechanism: temp = 20
    num1 = num2;   //Mechanism: num1 = 15
    num2 = temp;   //Mechanism: num2 = 20
    printf("Number 1 is '%d'\n",num1);
    printf("Number 2 is '%d'",num2);
    return 0;
}