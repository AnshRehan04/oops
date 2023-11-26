#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void push()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void display(){
    int i=0;
    for (int i = 0; i < ; i++)
    {
        /* code */
    }
    
}
void main()
{
    // int ch;
    // do
    // {
    //     printf("Enter choice for operation: ");
    //     scanf("%d",&ch);
    //     switch(ch)
    //     {
    //         case 1:
    //         push();
    //         break;
    //     }
    // }
    // while(ch!=0);

    int ch=5;
    push(ch);

}

