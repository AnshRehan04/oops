#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *ptr;
    char file1[]="abcd.txt";
    ptr=fopen(file1,"w");
    if (ptr == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    fprintf(ptr,"Hello");
    // printf("Success");

    ptr = fopen(file1, "r");
    
    if (ptr == NULL) {
        printf("Error opening file for reading");
        return 1;
    }
}