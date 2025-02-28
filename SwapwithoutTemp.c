/*
Write a program that swap two numbers without using temp varriable.
*/
#include<stdio.h>
int main()
{
    int num1=10, num2=8;
    int num3, num4;
    num1 = num1 - num2;    //num1 = Difference between number1 & number2
    num2 = num1 + num2;    //num2 = Difference + inputed num 2 = that means num2 is inputed num1.
    num1 = num2 - num1;    //num1 = num2 - Difference = that means num1 is inputed num2.
    printf("Number1 = %d\n",num1);
    printf("Number2 = %d\n",num2);
    printf("Enter Number3:");
    scanf("%d",&num3);
    printf("Enter number4:");
    scanf("%d",&num4);
    num3 = num3 - num4;
    num4 = num3 + num4;
    num3 = num4 - num3;
    printf("Number3 = %d\n",num3);
    printf("Number4 = %d",num4);
    return 0;
}