#include <stdio.h>
struct student{
    int a;
    int b;
    float c;
};
int main(){
    struct student st={2,34,2.4};
    printf("%d %d %f",st.a,st.b,st.c);
}