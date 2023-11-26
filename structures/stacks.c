#include <stdio.h>
struct stack{
    int size;
    int top;
    int *arr;
};
void push(struct stack *st,int x){
    if (st->top==st->size-1)
    {
        printf("Overflow ");
    }
    else{
        st->top++;
        st->arr[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1;
    if (st->top==-1)
    {
        printf("Underflow ");
    }
    else{
        x=st->arr[st->top];
        st->top--;
    }
    return x;
}
void display(struct stack st){
    int i;
    for ( i = st.top; i>=0; i--)
    {
        printf("%d",st.arr[i]);
        printf("\n");
    }
}
int main(){
    struct stack st;
    st.size=4;
    st.top=-1;

    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,10);
    pop(&st);
    display(st);
}