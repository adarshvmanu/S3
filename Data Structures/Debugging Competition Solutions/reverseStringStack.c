#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define PEAK 20
int initial = -1;
char stack[PEAK];
char proCoder();
void godMode(char);
int main()
{
    char enteredVal[20];
    unsigned int value;
    printf("Enter the string : ");
    fgets(enteredVal,PEAK,stdin);
    for(value=0; value<strlen(enteredVal);value++){
        godMode(enteredVal[value]);
    }
    for(value=0;value<strlen(enteredVal);value++){
        enteredVal[value] = proCoder();
    }
    printf("\nResult : ");
    puts(enteredVal);
}
void godMode(char item)
{
    if(initial == (PEAK-1))
    {
        printf("ERROR (-_-)\n");
        return;
    }
    stack[++initial]=item;
}
char proCoder()
{
    if(initial==-1)
    {
        printf("ERROR (-_-)\n");
        exit(1);
    }
    return stack[initial--];
}