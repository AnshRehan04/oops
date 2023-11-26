#include <stdio.h>
struct stack{
    int size;
    int top;
    int *s;
};

void push(struct stack *st,int x ){
    if (st->top==st->size-1)
    {
        printf("Stack overflow ");
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack st){
    int x=-1;
    if (st.top==-1)
    {
        printf("Stack underflow ");
    }
    else{
        x=st.s[st.top];
        st.top--;
    }
    return x;
    
}
void display(struct stack st){
    for (int i = st.top; i >=0; i--)
    {
        printf("%d",st.s[i]);
        printf("\n");
    }
}
int main(){
    struct stack st;
    st.size=5;
    st.top=-1;
    push(&st,40);
    push(&st,20);
    push(&st,100);
    push(&st,10);

    printf("Deleted Element is ");
    printf("%d",pop(st));
    display(st);
}