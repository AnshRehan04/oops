#include<iostream>
using namespace std;
void display(char str[],int l,int count,int p,char x){
    if(p>l){
        cout<<"no of occurence : "<<count<<endl;
        return;
    }
    else{
        if(str[p++]==x){
            count++;
        }
        display(str,l,count,p,x);
    }
}
int main(){
    char str[20];
    cout<<"Enter a string ";
    cin>>str;
    char x;
    cout<<"Enter the string for occurence ";
    cin>>x;
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    display(str,length,0,0,x);
}
