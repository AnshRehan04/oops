#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    int *x=*y;
    int *y=temp;
}
void sorting(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i <=5; i++)
    {
        for (int j = i+1; j <=5; j++)
        {
            if (arr[i]>arr[j])
            {
                // swap(arr[i],arr[j]);
                // arr[i]=temp;
                // arr[j]=arr[i];
                // arr[i]=arr[j];
                
                
            }
            else{
                break;
            }
            
        }
        
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i <=5; i++)
    {
        printf("%d",arr[i]);
    }
    
}
int main(){
    int arr[5]={2,3,1,5,4};
    sorting(arr,5);
    printarray(arr,5);
}