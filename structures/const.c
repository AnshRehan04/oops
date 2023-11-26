#include <stdio.h>
void even(int *,int *);
void even(int *b,int *flag){
    // printf(" value is %d",*b);
    if (*b%2==0)
    {
        // *b=1;
        *flag=1;
    }
    else{
        // *b=0;
        *flag=0;
    }
}
void main(){
    // const int i=10;
    // printf("i is %d",i);
    // i++;
    // printf("i is %d" ,i);

    // int *const x=&i;
    // // printf("X is %u",&i);
    // printf("X is %u",*x);

    int n,flag;
    printf("Enter the value ");
    scanf("%d",&n);
    flag=0;
    even(&n,&flag);  
    if (flag==1)
    {
        printf("It is Even");
    }
    else{
        printf("it is odd");
    }
    

}