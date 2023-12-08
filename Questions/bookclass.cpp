#include <iostream>
#include <string>
using namespace std;
class book{
    private:
    string title;
    string author;
    int year;
    public:
    book(string t,string a ,int y){
        title=t;
        author=a;
        year=y;
    }
    ~book(){
        cout<<"Destruction of book "<<title;
    }
};
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

    book b(title,author,year);

}