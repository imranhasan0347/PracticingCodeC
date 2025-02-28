/*
>
>=
<
<=
==
!=
*/ 
//Control statement: 1/Conditional control statement 2/Loop Control Statement
//Conditional control statement: if else, switch
//In this program I learn if else
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if(num%2==0)
    printf("Even");
    else
    printf("Odd");
    return 0;
}