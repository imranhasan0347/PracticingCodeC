#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float num4;
    double num5;
    char c1,c2;
    printf("Enter the integers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("Integers are: %d %d %d",num1,num2,num3);
    printf("\nEnter floating numbers:");
    scanf("%f %lf",&num4,&num5);
    printf("Floating numbers are: %f %lf",num4,num5);
    printf("\nEnter characters:");
    scanf("%c %c", &c1, &c2);
    printf("Characters are: %c %c",c1,c2);
    return 0;
}