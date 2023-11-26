#include <stdio.h>
// int increment(int);
int increment(int *a,int *b){
    *a++;
    *b++;
    return 0;
}
int main(){
    int x=15;
    int y=16;
    increment(&x,&y);
    printf("%d",x);
    printf("%d",y);
}
