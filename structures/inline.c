#include <stdio.h>
#include <math.h>
int ans(int n){
    int rev=0;
    int rem;
    while(n!=0){
        rem=n%10;  //123->3
        rev=rev*10+rem;
        n=n/10;
    }
    // printf("%d",rev);
    // int size=sizeof(rev);  //3
    int base;
    int i,result=0;
    for ( i = 1; i <3; i++)
    {
        base=rev%10;  //321->1  2  //784  4
        result=result+pow(base,base+1);
        rev=rev/10;
    }
    printf("%d",result);
    


}
int main(){
    int n;
    scanf("%d",&n);
    ans(n);
}