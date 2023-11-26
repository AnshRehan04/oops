#include <iostream>
using namespace std;
class cons{
    public:
    cons(){
        int *ptr=new int;
        *ptr=5;
        cout<<*ptr<<endl;
    }
};
int main(){
    // int *arr=new int[5];
    // for (int i = 0; i <5; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"Elements are "<<endl;
    // for (int i = 0; i <5; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // delete arr;

    // int *ptr=new int;
    //     *ptr=5;
    //     cout<<*ptr<<endl;
    //     delete ptr;
    cons c1;
    
}
