#include <stdio.h>
void sort(int n,int *p){
    int temp;
    for (int i = 1; i <n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            if (*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
        
    }
    
}
void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
}
int main(){
    int arr[5]={3,5,10,2,1};
    sort(5,arr);
    show(arr,5);

}