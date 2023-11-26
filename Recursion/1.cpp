#include <iostream>
using namespace std;
// void display(int x){
//     cout<<endl<<x;
//     x++;
//     if (x<=10)
//     {
//         display(x);
//     }
// }
// void display1(int x){
//     cout<<endl<<x;
//     x--;
//     if (x>=1)
//     {
//         display1(x);
//     }
// }
// void display2(int x){
//     cout<<endl<<x;
//     x=x+5;
//     if (x<=100)
//     {
//         display2(x);
//     }
// }
// void display3(int x){
//     cout<<endl<<x;
//     x=x+10;
//     if (x<=150)
//     {
//         display3(x);
//     }
// }

void sum(int x){
    // cout<<endl<<x;
    int sum=0;
    for (int i = 1; i <=x; i++)
    {
        sum+=i;
    }
    cout<<sum;
    // sum(10);
}


int main(){
    // int x;
    // cout<<"Enter x :";
    // cin>>x;
    // display2(5);
    sum(10);
}