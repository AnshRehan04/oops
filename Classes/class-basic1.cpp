#include <iostream>
using namespace std;
class employee{   //Class Declaration.
    private:      //By default Class is Private.
    int a,b,c;   //a ,b are private data members
    public:
    void getdata();
    void display();
    
};

void employee::getdata(){
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
};

void employee::display(){
    cout<<"values of a is "<<a<<endl;
    cout<<"values of b is "<<b<<endl;
    cout<<"values of c is "<<c<<endl;
}
int main(){
    employee obj;   //object declaration
    obj.getdata();
    obj.display();
}