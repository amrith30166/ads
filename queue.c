#include<stdio.h>
#define size 5
int queue[size]={};
int front=-1;
int rear=-1;
void enqueue(int ele){                        
if(rear==size-1){
printf("queue is full");

}
else{
if(front==-1){
front=0;
}
rear++;
queue[rear]=ele;
}

}
void display(){
for(int i=front;i<=rear;i++){
printf("%d\n",queue[i]);
}
}

void dequeue(){
 if (front == -1 || front > rear) {
 printf("Queue is empty\n");
 return;
 }
printf("the value dequeue= %d",queue[front]);
front++;

 if (front > rear) {
 front = -1;
 rear = -1;
}

}


int main(){
enqueue(10);
enqueue(20);
enqueue(30);

display();
dequeue();
display();


return 0;

}
