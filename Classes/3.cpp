#include <iostream>
using namespace std;
class add{
    public:
    int getdata();
    int sum(int);
    int  display(int a);
};

int add::getdata(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    return n;
};

int add::sum(int a){
    int sum=0,temp=0;
    while (a!=0)
    {
        temp=a%10;
        sum=sum+temp;
        a=a/10;
    }
    return sum;
};

int add::display(int sum){
    cout<<"Sum is "<<sum;
}
int main(){
add obj;
    int n=obj.getdata();
    int f=obj.sum(n);
    obj.display(f);    
}