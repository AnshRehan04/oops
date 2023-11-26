#include <iostream>
using namespace std;
class ans{
    public:
    int getdata();
    bool logic1(int);
    int logic2(int ,int );
    int display(int );
};

int ans::getdata(){
    int n;
    cout<<"Enter first number ";
    cin>>n;
    int m;
    cout<<"Enter second number ";
    cin>>m;
    return m;
};
bool ans::logic1(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int ans::logic2(int n1, int n2) {
    int prime_sum = 0;
    for (int num = std::max(n1, 2); num <= n2; ++num) {
        if (logic1(num)) {
            prime_sum += num;
        }
    }
    return prime_sum;
}

int ans::display(int prime_sum){
    cout<<"Sum "<<prime_sum;
}

int main(){
    ans obj;
    int n=obj.getdata();
    int m=obj.logic1(n);
    int b=obj.logic2(n,m);
    obj.display(b);
}
