#include <iostream>
using namespace std;
bool poweroftwo(int n){
    if(n==1){
        return 1;
    }
    while (n%2==0)
    {
        return 1;
    }
    return 0;
    
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if (poweroftwo(n))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}