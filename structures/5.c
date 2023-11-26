#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("A is greater ");
    }
    else if (b>a && b>c && b>d)
    {
        printf("B is greater ");
    }
    else if (c>a && c>b && c>d)
    {
        printf("C is greater ");
    }
    else{
        printf("D is greater ");
    }
    return 0;
}