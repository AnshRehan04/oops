#include <iostream>
using namespace std;
class parent{
    public:
    void print(){
        cout<<"Base Function \n";
    }
    int sum(){
        cout<<1+2;
    }
};
class child:public parent{  //inherit the parent class into child class.
        public:
        void print(){
            cout<<"Child Function ";
        }
    };
int main(){
    // parent c1;
    child c2;
    // c1.print();
    c2.print();
    c2.sum();
}