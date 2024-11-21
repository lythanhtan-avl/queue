#include <stdbool.h>  
#include <stdio.h>    


#define MaxSize 100  


typedef int ElementType;

typedef struct {
    ElementType elements[MaxSize];
    int front;
    int rear;
    int size;
} Queue;

void makeNull(Queue* Q) {
    Q->front = 0;
    Q->rear = 0;
    Q->size = 0;
}

bool isEmpty(Queue Q) {
    return Q.size == 0;
}

bool isFull(Queue Q) {
    return Q.size == MaxSize;
}

void enQueue(ElementType x, Queue* Q) {
    if (isFull(*Q)) {
        printf("Queue is full, cannot enqueue!\n");
        return;
    }
    
    Q->elements[Q->rear] = x;
    Q->rear = (Q->rear + 1) % MaxSize;
    Q->size++;
}

ElementType deQueue(Queue* Q) {
    if (isEmpty(*Q)) {
        printf("Queue is empty, cannot dequeue!\n");
        return -1; // Error value
    }

    ElementType item = Q->elements[Q->front];
    Q->front = (Q->front + 1) % MaxSize;
    Q->size--;

    return item;
}
