#include <iostream>
using namespace std;
int main(){
    int *p;
    int *p=new int;
    int x=10;

    int *p=new int[10];
    // new --alloacte memory 
    free(p);

    // malloc(); //Memory ALlocation

    int *p=(int *)malloc(sizeof(int));
    delete(p);
}