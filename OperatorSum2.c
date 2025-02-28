//Write a program that display sum with varriable but not with input.
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    float num4,num5;
    double num6, num7, sum;
    num1=3, num2=4, num3=8, num4=7.73, num5=4.456;
    num6=2.5489345850990895, num7=8388344464366736;
    sum = num1 + num2 + num3 +num4 + num5 + num6; 
    printf("The answer = %.16fl",sum);
    return 0;
} 