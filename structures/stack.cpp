#include <iostream>
using namespace std;
void push(int stack[],int x){
    int top=-1;
    if (top==4)
    {
        cout<<"Overflow ";
    }
    else{
        top++;
        stack[top]=x;
        cout<<x;
    }
}
int main(){stackarray.c

    int x;
    cout<<"Enter a number ";
    cin>>x;
    int stack[5];
    push(stack,5);

}