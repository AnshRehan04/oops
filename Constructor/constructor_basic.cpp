#include <iostream>
using namespace std;
class student{
    int rno;
    char name[50];
    char section[3];
public:
student(){
    cout<<"Enter roll no ";
    cin>>rno;
    cout<<"Enter name ";
    cin>>name[50];
    cout<<"Enter section ";
    cin>>section[3];
}
void display(){
    cout<<rno<<"\n"<<name[50]<<"\n"<<section[3]<<"\n";
}
};
int main(){
    student s1;
    s1.display();
}