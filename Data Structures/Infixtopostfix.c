#include <stdio.h>
#include <ctype.h>            

char stack[50];
int top=-1;       
 
int push(char elem)
{                       
    stack[++top]=elem;
    return 0;
}
 
char pop()
{                      
    return(stack[top--]);
}
 
int pr(char symbol)
{              
   
if(symbol == '^')
{
return(3);
}
else if(symbol == '*' || symbol == '/')
{
return(2);
}
else if(symbol == '+' || symbol == '-')          
{
return(1);
}
else
{
return(0);
}
}

void main()
{                        
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("Enter Infix Expression : ");
    scanf("%s",infix);
    push('#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else
            if(isalnum(ch)) postfix[k++]=ch;
            else
                if( ch == ')')
                {
                    while( stack[top] != '(')
                        postfix[k++]=pop();
                    elem=pop(); 
                }
                else
                {       
                    while( pr(stack[top]) >= pr(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( stack[top] != '#')     
        postfix[k++]=pop();
    postfix[k]='\0';          
    printf("\nPostfix Expression =  %s\n",postfix);
}