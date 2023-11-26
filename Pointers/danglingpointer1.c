// Returning Local Variable in Function call cause in dangling pointer.
#include <stdio.h>
int *myfun(int a){
    return &a;
}
int main(){
    int a=5;
    int *ptr=myfun(a);
    printf("%d",*ptr);
}