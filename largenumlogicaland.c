/*
Write a program that find largest number from three random numbers. 
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1, &num2,&num3);
    if(num1>num2 && num1>num3)
    printf("Large number = %d",num1);
    else if(num2>num3 && num2>num1)
    printf("Large number = %d",num2);
    else if(num3>num1 && num3>num2)
    printf("Large number = %d",num3);
    else
    printf("Numbers are equal");
    return 0;
    //It has some error. It is not the ideal way.
}