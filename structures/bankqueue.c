#include <stdio.h>
struct queue {
    int size;
    int rear;
    int front;
    int *q;
};
void enqueue(struct queue *st,int x){
    if (st->rear==st->size-1)
    {
        printf("Overflow ");
    }
    else{
        st->rear++;
        x=st->q[st->rear];
    }
}

int dequeue(struct queue st){
    int t=-1;
    if (st.rear==-1)
    {
        printf("Empty ");
    }
    else{
        st.front--;
        t=st.q[st.front];
    }
    return x;
    
}


int main(){
    struct queue st;
    st.size=4;
    st.rear=-1;
}