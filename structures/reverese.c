#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10
int top=-1,count=0;
char stack[10];
char output[10];
void push(char str){
    if (top==size-1)
    {
        printf("Full");
    }
    else{
        top++;
        stack[top]=str;
        
    }
}

char pop(){
    if (top==-1)
    {
        printf("Empty ");
    }
    else{
        output[count]=stack[top];
        top--;
        count++;
    }
}
int main(){
    char str[10];
    printf("Enter a string ");
    gets(str);
    int len=strlen(str);
    for (int i = 0; i <len; i++)
    {
        push(str[i]);
    }
    for (int i = top; i <len; i--)
    {
        printf("%c",str[i]);
    }
    
    
}