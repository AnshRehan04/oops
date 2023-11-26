#include<iostream>
using namespace std;
int prime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
        flag=0;
        break;
        }
        else{
        }
    }
    return flag;
}
void display(char str[],int length,int p,int sum);
int main(){
    // char *str = "you are welcome";
    char str[20];
    cout<<"Enter the string ";
    cin>>str;
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    } 
    display(str,length,0,0);
}
void display(char str[],int length,int p,int sum){
    if(p>length){
        cout<<"Sum is  "<<sum<<endl;
        int ans = prime(sum);
        if(ans==1){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not prime"<<endl;
        }
        return;
    }
    else{
        int x= str[p++];
        sum = sum + x;
        display(str,length,p,sum);
    }
   
}