#include <iostream>
using namespace std;
class test{
    public:
    test(){
        int *ptr=new int;  //dynamic memory is allocated.
        *ptr=5;
        cout<<"Value of ptr is "<<*ptr<<endl;
    }
};
int main(){
    test t;
    return 0;
}