#include <stdio.h>
#include <stdlib.h>
int compareinteger(const  void *a,const void *b){
    int A=*((int*)a);
    int B=*((int*)b);

    if (A>B)
    {
        return 1;
    }
    else{
        return -1;
    }
    
    return 0;
}
int main(){
    int arr[5]={1,12,4,3,10};
    printf("Before sorting ");
    for (int i = 0; i <5; i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
    qsort(arr,5,sizeof(int),compareinteger);
    printf("After sorting ");
    for (int i = 0; i <5; i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
}