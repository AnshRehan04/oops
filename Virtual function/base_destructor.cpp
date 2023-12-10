// #include <iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"A cons"<<endl;
//     }
//     ~A(){
//         cout<<"A desc"<<endl;
//     }
// };
// class B:public A{
//     public:
//     B(){
//         cout<<"B cons"<<endl;
//     }
//     ~B(){
//         cout<<"B desc"<<endl;
//     }
// };
// // class C:public A,public B{
// //     public:
// //     C(){
// //         cout<<"C cons ";
// //     }
// //     ~C(){
// //         cout<<"C desc";
// //     }
// // };
// int main(){
//     A *ptr=new B();
//     delete ptr;//Early binding

// }

#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A cons"<<endl;
    }
    virtual ~A(){
        cout<<"A desc"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"B cons"<<endl;
    }
    virtual ~B(){
        cout<<"B desc"<<endl;
    }
};
// class C:public A,public B{
//     public:
//     C(){
//         cout<<"C cons ";
//     }
//     ~C(){
//         cout<<"C desc";
//     }
// };
int main(){
    A *ptr=new B();
    delete ptr; //Late binding

}