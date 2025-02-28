#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    printf("Your input is a Vowel");
    else
    printf("Your input is a Consonant");
    return 0;
}