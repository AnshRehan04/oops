#include <stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r={10,4};  //Using list
    printf("%d %d \n",r.length,r.breadth);//Accessing.

    struct rectangle s;
    s.length=19;
    s.breadth=20;
    printf("%d %d \n",s.length,s.breadth);//Accessing.

    struct rectangle t={.length=20,.breadth=40};  //Using destinated List.
    printf("%d %d \n",t.length,t.breadth);//Accessing.

    struct rectangle p={1,3};
    struct rectangle *ptr=&p;//using pointer
    printf("%d %d ",ptr->length,ptr->breadth);//Accessing using pointer.
}