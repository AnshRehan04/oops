#include <stdio.h>
struct str1{
    int a;
    float b;
    char c;
    char arr[10];
};
int main(){
    struct str1 var2;
    var2.a=2;
    var2.b=1.1;
    var2.c='a';
    var2.arr[10] = "chitkara";
}