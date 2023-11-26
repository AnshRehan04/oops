#include <stdio.h>
int main(){
    int age;
    printf("Enter Your age :");
    scanf("%d",&age);
    if (age<=0)
    {
        printf("Invalid Age ");
    }
    else if (age<18 && age>0)
    {
        printf("Minor ");
    }
    else if (age>=18 && age<=60)
    {
        printf("Adult ");
    }
    else{
        printf("Senior Citizen ");
    }    
}