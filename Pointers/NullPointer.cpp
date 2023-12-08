// Null Pointer is a pointer that doesnot points to any memory location.It represents invalid memory location.
#include <iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr=0; //Initialize the pointer to null
    ptr=&a;
    cout<<*ptr;

    int *ptr=NULL;
    // ptr=(int *)malloc(sizeof(int));
    // if (ptr==NULL)
    // {
    //     cout<<"Memory could not be allocated";
    // }
    // else{
    //     cout<<"Memory could be allocated ";
    // }
    // cout<<sizeof(NULL);   //size of NULL is 4bytes 
}