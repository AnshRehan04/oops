#include <stdio.h>
void main(){
    even(46);
    // printf("hello");
}
void even(int x){
    if(x%2==0){
        printf("Even");
    }  
    else{
        printf("Odd");
    }
}