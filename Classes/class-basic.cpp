#include <iostream>
using namespace std;
class employee {   //Class Declaration.
    private:
    int a,b;   //a ,b are private data members
    public:
    int c;     //c is public data members.
    void getdata(int a,int b);
    void display();
};

void employee::getdata(int a1,int b1){
    // cout<<"Enter three numbers ";
    // cin>>a>>b>>c;
    a=a1;
    b=b1;
    // c=c1;
};

void employee::display(){
    cout<<"values of a is "<<a<<endl;
    cout<<"values of b is "<<b<<endl;
    cout<<"values of c is "<<c<<endl;
}
int main(){
    employee obj;   //object declaration
    obj.c=4;
    obj.getdata(1,2);
    obj.display();
}