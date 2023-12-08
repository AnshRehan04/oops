// // Packing.
// #include <stdio.h>
// #pragma pack(1)
// struct student{
//     int x;
//     char a;
//     double d;
    
// }st;
// void main(){
//     printf("%d\n",sizeof(st.x));
//     printf("%d\n",sizeof(st.a));
//     printf("%d\n",sizeof(st.d));
// }

#include <stdio.h>
// #pragma pack(1)
struct student{
    int x;
    double a;
    double d;
    
}st;
void main(){
    // printf("%d\n",sizeof(st.x));
    // printf("%d\n",sizeof(st.a));
    // printf("%d\n",sizeof(st.d));
    printf("%d",sizeof(st));//24
}