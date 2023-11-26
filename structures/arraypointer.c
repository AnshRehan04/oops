#include <stdio.h>
// using namespace std;
int main(){
    int arr[5]={1,22,243,4,5};
    // cout<<arr;
    printf("%d\n",arr);
    printf("%p\n",arr);
    printf("%p\n",&arr);
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
}