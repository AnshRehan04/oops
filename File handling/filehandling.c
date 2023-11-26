#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file;
    char filename[]="abc.txt";
    file = fopen(filename, "w");
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a sample file.\n");
    file = fopen(filename, "r");

}