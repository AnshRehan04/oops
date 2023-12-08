#include <iostream>
#include <vector>
#include <list>
using namespace std;
void display(list<int> l){
    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();++itr){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    list <int> l{1,2,4,7,3};
    list <int> l2{1,56,4,2,3};
    display(l);
    l.push_back(5);
    l.push_back(6);
    l.pop_back();
    l.sort();
    l.remove(1);
    display(l);
    l2.sort();
    l.reverse();
    cout<<"After reverse ";
    display(l);
    display(l2);
    return 0;
}