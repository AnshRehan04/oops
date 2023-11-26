#include <stdio.h>
void sort(int arr[],int n){
    int temp;
    for (int i = 1; i <n; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
}
void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    { 
        printf("%d",arr[i]);
        printf(" ");
        
    }
    
}
int main(){
    int arr[5]={4,5,82,1,3};
    sort(arr,5);
    show(arr,5);
}