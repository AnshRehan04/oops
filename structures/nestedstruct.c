#include <stdio.h>
int main(){
    // struct str1{
    //     int a;
    //     float b;
    //     struct str2{
    //         char c;       //Embeded Structure
    //         char arr[10];
    //     };
    // };

    struct child{
        int a,b;
        struct Parent{
            char c;
            struct child;
        };
    };
}