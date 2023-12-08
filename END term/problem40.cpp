// • You are given two arrays, both of given size N
// The first array represents the price of commodities present in your cart, represented by the variable name price
// • The second array represents the quantity of each commodity that you need, represented by the variable name quantity
// • You have to find the total price of the commodities present in the cart
// • For example, consider the value stored in N = 3, and the first array is price = [100,20,40], and the second array is quantity = [2,1,2]
// • Then, the required cart total will be
// Cart Total = (100 * 2 + 20 * 1 + 40 * 2) = (200+ 20 + 80) = 300
// • Therefore, the required output will be 300

#include <iostream>
using namespace std;
int main(){
    int a[3]={100,20,40};
    int b[3]={2,1,2};
    int prod=0;
    for (int i = 0; i <3; i++)
    {
            prod=prod+a[i]*b[i];
        
    }
    cout<<prod;
}