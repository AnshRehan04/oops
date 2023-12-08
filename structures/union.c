#include <stdio.h>
union car{
    int a;
    double b;
}st;
int main(){
    union car st;
    printf("%d",sizeof(st));//8  //It will return the maximum size out of all the datatypes defined.
}