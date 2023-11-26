#include <iostream>
using namespace std;
int main(){
    // int *p=NULL;
    // p=new int;
    // *p=10;
    // cout<<"\n=======Output=======";
    // cout<

    int *p;
    int i=0;
    // Allocating space for 5 integers
    p=(int *) malloc(sizeof(int)*5);
    cout<<"Enter Elements \n";
    for (int i = 0; i <5; i++)
    {
        cin>>p[i];
    }
    cout<<"input Elements are :\n";
    for (int i = 0; i <5; i++)
    {
        cout<<p[i]<<endl;
    }
    delete(p);
    cout<<"\nAfter Free ,input elements are \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;  //ya
    }
    
    
    
}