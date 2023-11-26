#include <iostream>
using namespace std;
class employee{
    private:
    int a=4;
    public:
    void getdata() ;//const: if we write const keyword it will give complitatio error.
};

void employee::getdata(){
    // int a=5;
    cout<<a;
}
int main(){
    employee obj;  //object declarartion
    obj.getdata();
}