#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct queue{
int f,r;
int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q, int item){
    if(q->r==SIZE-1)
        printf("QUEUE FULL");
    else{
        q->r=q->r+1;
        q->data[q->r]=item;
        if(q->f==-1){
            q->f=0;
        }
        }
}



void dequeue(QUEUE *q){
    if(q->f==-1)
        printf("Empty queue");
    else{
        printf("\n The element deleted is %d",q->data[q->f]);
        if (q->f=q->r){
            q->f=-1;
            q->r=-1;


        }
        else{
            q->f=q->f+1;
        }
    }
}
void display(QUEUE q){
    int i;
    if(q.f==-1)
        printf("Empty queue");
    else{
        printf("\n The elements are :\n");
        for(i=q.f;i<=q.r;i++){
            printf("%d\n",q.data[i]);
        }
    }
}
int main()
{
    int item,ch;
    QUEUE q;
    q.f=-1;
    q.r=-1;
    while(1){
        printf("\n Queue Operations\n");
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\n Enter element to insert:");
                scanf("%d",&item);
                enqueue(&q,item);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(q);
                break;
            default:
                printf("\n Exiting program.\n");
                exit(0);

        }
    }
    return 0;
}
