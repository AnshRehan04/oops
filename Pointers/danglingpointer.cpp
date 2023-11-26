// Dangling pointer is a Pointer that points to the invalid/free memory location.
#include <iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=(int *)malloc(sizeof(int)); //Memory milgyi hai
    free(ptr);  //Memory is free
    cout<<*ptr;
}