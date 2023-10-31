 #include<stdio.h>
#include<stdlib.h>
#define max 5
int f = -1, r = -1, queue[max];

void enqueue(int item){
    if(r == max - 1)
    {
        printf("Queue overflow");
        return;
    }
    else if(f == -1){
        f++;
        
    }
    r++;
    queue[r] = item;
    
}
void dequeue(){
    if(f == -1 || f > r){
        printf("Queue Underflow");
        return;
    }
    printf("The element deleted is %d\n", queue[f]);
    f++;
}

void display(){
    if(f == -1 || f > r){
        printf("Queue is empty");
        return;
    }
    for(int i = f; i <= r; i++){
        printf("%d\n", queue[i]);
    }
}

void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}
