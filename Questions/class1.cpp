#include <iostream>
using namespace std;
class laptop{
    private:
    char name[100];
    int quantity;
    int sum;
    public:
    void getitem(){
        cout<<"Enter item ";
        cin>>name[100];
        cout<<"Enter quantity ";
        cin>>quantity;
    }
    int price(){
        sum=1200*quantity;
    }

};
int main(){
    laptop obj;
    obj.getitem();
    cout<<"Price is "<<obj.price();
}