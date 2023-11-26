#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int array[MAX];
int top = -1;

void push(int character)
{
	if (top == MAX - 1)
	{
		printf("The stack is in overflow");
        return;
	}
    
	top++;
	array[top] = character;
}

int pop()
{
    int value;
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
        printf("%d", array[i]);
    }
    printf("\n");
}

int main()
{
    int string[100];
    printf("Enter your number to reverse: ");
    // gets(string);
    scanf("%d",&string[100]);

    int length = sizeof(string[100]) / sizeof(string[0]);

    for (int i = 0; i < length; i++)
    {
        push(string[i]);
    }
    print();
}