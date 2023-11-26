#include <iostream>
using namespace std;
bool prime(int n){
    int n1=2;
    if (n<=1)
    {
        return 0;
    }
    if (n%n1==0 )
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cout<<"Enter the no ";
    cin>>n;
    int s=prime(n);
    if (s)
    {
        cout<<"It is Prime";
    }
    else{
        cout<<"It is not Prime";
    }
    

}