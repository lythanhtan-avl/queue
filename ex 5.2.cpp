#include "queulib.h"

int main() {
    Queue Q;
    Stack S;

    makeNull(&Q);   
    initStack(&S);   

    int n, element;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);
        enQueue(element, &Q);
    }

    reverseQueueUsingStack(&Q, &S);

    printf("Queue after reversal:\n");
    while (!isEmpty(Q)) {
        printf("%d\n", deQueue(&Q));
    }

    return 0;
}
