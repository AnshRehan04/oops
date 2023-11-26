#include <stdio.h>
int display(int ,int)
int display(int x,int sum){
    printf("%d ",x);
    sum+=x;
    x++;
    if (x<=10)
    {
        display(x,sum);
    }
    else{
        return sum;
    }
}
int main(){
    int sum=display(1,0);    //1 2 3 4 5 6 7 8 9 10
    printf("\n sum:%d",sum);
}
