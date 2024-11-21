#include "queulib.h"

int main() {
    Stack S;
    Queue Q;

    makeNull(&Q);    
    initStack(&S);   

    int n, element;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);
        push(&S, element);
    }

    reverseStackUsingQueue(&S, &Q);

    printf("Stack after reversal:\n");
    while (!isStackEmpty(&S)) {
        printf("%d\n", pop(&S));
    }

    return 0;
}
