#include <iostream> 
using namespace std; 

class operators{ 
    int x; 
    public: 
    void accept(){
        x=10;
    }
    void operator ++(int){
        ++x;
    }
    void operator -(){
        x=-x;
    }
    void display(){
        ++x;
        cout<<x<<endl;
    }
};
int main(){
    operators a;
    a.accept();
    // a.operator++(2);
    a.operator-();
    a.display();
}