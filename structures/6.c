#include <stdio.h>
struct systumm{
    int a;
    char b;
    float c;
}var1;
int main(){
    struct systumm var1={2,3.3,'c'};   //Using initalising list
    // struct systumm var2={.a=3,.b=2.1,.c='e'};  //Using dot 
    struct  systumm *ptr=&var1;
    printf("%d %c %f ",ptr->a,ptr->b,ptr->c);
}