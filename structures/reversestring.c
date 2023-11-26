#include <stdio.h>
#include <string.h>
int top=-1,count=0;
#define size 100
char stack[size];
char output[size];

void push(char temp){
    if (top==size-1)
    {
        printf("stack overflow ");
    }
    else{
        top++;
        stack[size]=temp;
    }
}

char pop(){
    if (top==-1)
    {
        printf("Stack underlow ");
    }
    else{
        output[count]=stack[top];
        top--;
        count++;
    }
}

int main(){
    char str[size];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    for (int i = top; i < strlen(str); i--)
    {
        printf("%c",(str[i]));
    }
    
}