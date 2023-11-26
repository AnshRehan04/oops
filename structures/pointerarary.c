#include <stdio.h>
int main(){
    int arr[4]={2,4,5,3};
    int * ptr=arr;
    // ptr=arr;
    printf("%p\n",arr);  //Address will printed
    printf("%d\n",*arr);   //Value at index 0.
    printf("%d\n",*arr+1);   
    printf("%d\n",*(arr+1));   

}