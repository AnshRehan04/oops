#include <stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int temp){
    if (stack[top]==size-1)
    {
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=temp;
    }
}
void show(int arr[],int n){
    for (int i = 0; i <size; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
int main(){
    push(12);
    push(14);
    push(13);
    push(123);
    push(1);
    show(stack,5);
    
}