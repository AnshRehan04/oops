#include <stdio.h>
struct student {
    int rn;
    char name[20];
    char email[20];
};
void main(){
    struct student s;
    scanf("%d",&s.rn);
    printf(" value is %d\n",s.rn);

    struct student st[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&st[i]);
    }
    for ( i = 0; i <3; i++)
    {
        printf("%d",st[i]);
    }
    
    
}