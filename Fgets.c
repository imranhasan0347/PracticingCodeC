/*
 Write a program takes input and show one's name with greeting.
 Use fgets() function.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("The fgets function in C is used to read a string from a specified input stream, such as standard input or a file.\n");
    printf("It is safer than the gets function because it allows you to specify the maximumm number of characters to read, preventing buffer overflow.");
    printf("\nEnter your name:");
    fgets(name,sizeof(name),stdin);
    size_t len=strlen(name);
    if(name[len -1] = '\n'){
        name[len-1]='\0';
    }
    printf("Assalamu alaikum: ");
    puts(name);
    printf("When I use 'fgets(name,sizeof(name)', then in input we can see a new line because it count 'enter' as a string and print a new line.");
    printf("\nAnd so we use some direction after fgets. I learn this after.");
    return 0;
}