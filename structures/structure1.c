#include <stdio.h>
union car{
    int a;
    float b;
    double c;
};
int main(){
    // struct car var1={2,3.2,'c'};  //intialize using List
    // printf("%d %f %c ",var1.a,var1.b,var1.c);  //Accessing

    // var1.a=2,var1.b=4.4, var1.c='e';  //Initalize using Dot.
    // printf("%d %f %c",var1.a,var1.b,var1.c);  //Accessing

    union car var1={.a=3,.b=3.3,.c=3.00};  //initialize using Designated List
    // printf("%d %f %d",var1.a,var1.b,var1.c);  //Accessing
    printf("%d\n",sizeof(var1));

    // struct car var1={1,2.3,'c'};
    // struct car  *ptr=&var1;  //initialize using Pointer
    // printf("%d %f %c",ptr->a,ptr->b,ptr->c);  //For accessing the pointer ALways arrow is used
}