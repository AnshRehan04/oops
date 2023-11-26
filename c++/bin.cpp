#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n=3;
    bitset<sizeof(int)*2> binarynuumber(n);
    cout<<binarynuumber;
}