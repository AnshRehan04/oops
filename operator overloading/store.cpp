// #include <iostream>
// #include <string>
// class store{
//     string product;
//     int price;
//     int quantity;
//     public:
//     // store(string pr="",int p=0,int q=0){
//     //     product=pr;
//     //     price=p;
//     //     quantity=q;
//     // }
//     store(const string& name, int price, int qty)
//         : product(name), price(price), quantity(qty) {}
//     store operator+(store const& c)const{
//         store res=*this;
//         res.price=res.price+c.quantity;
//         return res;
//     }
//     void result(){
//         // int res;
//         // res=price*quantity;
//         cout<<"Result is "<<product<<price<<quantity;
//     }
// };
// using namespace std;
// int main(){
//     store c1("laptop",1200,2);
//     store c2("PC",10,3);
//     store c3=c1+c2;
//     c3.result();
// }
#include <iostream>
#include <string>
using namespace std;

class Store {
private:
    string product;
    int price;
    int quantity;

public:
    // Constructor
    // Store(const string& name, int p, int q) : product(name), price(p), quantity(q) {}
    Store (string name,int p,int q){
        product=name;
        price=p;
        quantity=q;
    }
    // Overload the + operator
    Store operator+(const Store& other) const {
        Store result = *this;
        result.price=(price*quantity+other.price*other.quantity);
        // result.quantity=price*quantity;
        
        return result;
    }

    // Display the result
    void displayResult() const {
        // cout << "Product: " << product << ", Price: " << price << ", Quantity: " << quantity << endl;
        cout<<"Result is "<<price;
    }
};

int main() {
    Store c1("laptop", 1200, 2);
    Store c2("PC", 600, 3);

    Store c3 = c1 + c2;
    c3.displayResult();

    return 0;
}
