#include<stdio.h>
    int fib(int);
    int main()
    {
        int num=0,i,n;
        scanf("%d",&n);
        printf("Fibonacci series: ");
        for(i=1;i<=n;i++)
        {
            printf("%d ",fib(num));
            num++;
        }
    }
    int fib(int n)
    {
        if(n==0 || n==1)
            return n;
        else
            return (fib(n-1))+fib(n-2);    
    }