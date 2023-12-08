#include <iostream>
#include <string>
using namespace std;
class book{};
int main(){
    string title;
    cout<<"Enter the title ";
    getline(cin,title);
    
    string author;
    cout<<"Enter the author ";
    getline(cin,author);

    int year;
    cout<<"Enter the year ";
    cin>>year;

    cout<<title;
}