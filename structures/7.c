// wap to create a structure declare 4 variables and initialize using assignment operator,using initializer,using designated list,structured pointer
#include <stdio.h>
struct systumm{
    int a;
    float b;
    char c;
};

int main(){
    struct systumm var1={1,2.2,'m'};
    struct systumm*ptr=&var1;
    printf("%d %f %c",ptr->a,ptr->b,ptr->c);
}