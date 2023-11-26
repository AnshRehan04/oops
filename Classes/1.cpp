#include <iostream>
using namespace std;
class student
{
private:
int rn;
char name[20];

public:
void getdata(){
cin>>rn;
cin>>name;
}

void display(){
cout<<rn;
cout<<name;
}
};
int main(){
    student obj;
    obj.getdata();
    obj.display();
}
