#include <iostream>
using namespace std;
int swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<endl;
    cout<<*b;
}
int main(){
    int a=10;
    int b=20;
    // int temp;
    swap(&a,&b);

}