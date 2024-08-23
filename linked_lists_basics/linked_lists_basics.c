#include <stdio.h>
#include <stdlib.h>
/*
typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = (*head);
    (*head) = newNode;
}

void printList(Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);

    printList(head);  // Output: 4 3 2 1

    return 0;
}
*/

int main() {
    int* w_calloc;
    int n = 4;

    /*int* w_malloc = malloc(5 * sizeof(int));
    if (w_malloc == NULL) {
        printf("memomy allocation problem");
    }*/

    w_calloc = (int*)calloc(n, sizeof(int));
    if (w_calloc == NULL) {
        printf("memomy allocation problem");
    }
    /*
    //printf("malloc: %d\n", w_malloc);
    printf("calloc: %d\n\n", w_calloc);

    //printf("malloc address: %p\n", w_malloc);
    printf("malloc address: %p\n\n", w_calloc);
    free(w_calloc);
    //free(w_malloc);
    printf("freeing malloc and calloc\n");

    //printf("malloc: %d\n", w_malloc);
    printf("calloc: %d\n\n", w_calloc);
    */


    for (int i = 0; i < n; i++) {
        printf("%d\n",w_calloc[i]);
    }

    for (int i = 0; i < n; i++) {
        w_calloc[i] = i + 1;
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d\n", w_calloc[i]);
    }

    free(w_calloc);
    //w_malloc = NULL;
    w_calloc = NULL;

    return 0;
}