// #include <stdio.h>
// // #pragma pack(1)
// struct student{
//     int a;
//     char b;
//     float c;
// }var1;
// int main(){
//     struct student ;
//     printf("%d",sizeof(var1));
//     // printf("%d",sizeof(var1.b));

// }
#include <stdio.h>
// #pragma pack(1)
struct student{
    int a;
    double b;
    // float c;
}var1;
int main(){
    struct student ;
    printf("%d",sizeof(var1));
    // printf("%d",sizeof(var1.b));

}