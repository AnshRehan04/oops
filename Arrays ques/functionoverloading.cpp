#include <iostream>
using namespace std;
class functionoverloading{
    public:
    void value(int val){
        cout<<"Value "<<val<<endl;
    }

    void value(float val){
        cout<<"Value = "<<val<<endl;
    }
};
int main(){
    functionoverloading obj;
    obj.value(10.00);
}