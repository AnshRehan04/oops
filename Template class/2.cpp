#include <iostream>
using namespace std;
template <class me>
class arithamatic{
    private:
    me a;
    me b;
    public:
    arithamatic(me a,me b);
    me add();
};
template <class me>
    arithamatic<me>::arithamatic(me a ,me b){
    this->a=a;
    this->b=b;
}
template <class me>
me arithamatic<me>::add(){
    me c;
    c=a+b;
    return c;
}
int main(){
    arithamatic<int> get(10,12);
    arithamatic<float> get1(10.2,12);
    cout<<"ADD is "<<get.add()<<endl;
    cout<<"ADD is "<<get1.add();


}