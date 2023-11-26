#include<iostream>
using namespace std;
int display(char str[],int length,int p,int sum){
    if(p>length){
        cout<<"Sum: "<<sum;
        // return 0;
    }
    else{
        int a= str[p++];
        sum = sum + a;
        display(str,length,p,sum);
    }
}

bool isprime(int n, int divisor = 2) {
    if (n <= 1) {
        return false;
    }
    if (divisor * divisor > n) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isprime(n, divisor + 1);
}

int main(){
    // char *str = "you are welcome";
    char str[20];
    cout<<"Enter the string :";
    cin>>str;
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    } 
    int e=display(str,length,0,0);
    cout<<e;
    cout<<endl;
    bool prime = isprime(e);
    if (prime) {
        cout << "a prime number" ;
    } else {
        cout << "not  a prime number" ; 
    }
    
}
