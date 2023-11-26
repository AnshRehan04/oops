#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

char array[MAX];
int top = -1;

void push(char character)
{
	if (top == MAX - 1)
	{
		printf("The stack is in overflow");
        return;
	}

	top++;
	array[top] = character;
}

char pop()
{
    char value;;
    if (top == -1)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    value = array[top];
    top--;
}

void print()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%c", array[i]);
    }
    printf("\n");
}

int main()
{
    char string[100];
    printf("Enter your string to reverse: ");
    gets(string);

    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        push(string[i]);
    }
    print();
}