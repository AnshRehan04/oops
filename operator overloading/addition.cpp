// Additon operator overloading.
#include <iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter the number ";
        cin>>a;
    }
    void setdata(){
        cout<<a;
    }

    demo operator+(demo bb){
        demo cc;
        cc.a=a+bb.a;
        return cc;
    }
};
int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    // aa.setdata();
    // bb.setdata();
    cout<<"Sum is ";
    cc.setdata();
}