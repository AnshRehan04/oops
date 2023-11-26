#include <stdio.h>
int main(){
    printf("What is the Capital of India ?");
    printf("\n 1:New Delhi \n 2:Mumbai \n 3: Chandigarh \n 4:Kolkata");
    int option;
    printf("\n");
    printf("Select Option ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:printf("Correct Answer ");
        break;
    case 2:printf("InCorrect Answer ");
        break;
    case 3:printf("InCorrect Answer ");
        break;
    case 4:printf("InCorrect Answer ");
        break;
    default:printf("Invalid Answer ");
        break;
    }
    
}