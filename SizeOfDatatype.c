/*
Write a program that print size of datatypes.
*/
#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("Size of int = %zu bytes\n",sizeof(i));
    printf("Size of float = %zu bytes\n",sizeof(f));
    printf("Size of double = %zu bytes\n",sizeof(d));
    printf("Size of char = %zu bytes\n",sizeof(c));
    printf("To get result of datatype size we use sizeof operator.\nThe percent zu format specifier is used in C to print size_t values.");
    return 0;
}