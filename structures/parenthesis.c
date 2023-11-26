#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top=-1;
int size=10;
char e[10],stack[10];
void push(char e){
    top++;
    stack[top]=e;
}
void pop(){
    top--;

}
int main(){
    printf("Enter the expression ");
    scanf("%s",e);
    for (int i = 0; e[i]!='\0'; i++)
    {
        if (e[i]=='(' ||e[i]=='{' || e[i]=='[' )
        {
            push(e[i]);
        }
        else if (e[i]==')' || e[i]=='}' || e[i]==']')
        {
            pop();
        }
        
    }
    if (top==-1)
        {
            printf("Valid");
        }
        else{
            printf("Invalid ");
        }
    
}