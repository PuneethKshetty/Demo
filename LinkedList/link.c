#include "Linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int data,i;

    while(1) {

    // take user input for the size
    printf("Enter the size of the linked list (not more than 4): ");
    scanf("%d", &size);

    // delete nodes if size is negative
    if (size < 0) {
        size = -size;
        for (i = 0; i < size; i++) {
            if (head == NULL) {
                printf("Cannot delete more nodes. Linked list is empty.\n");
                break;
            }
            struct Node* temp = head;
            head = head->next;
            free(temp);
        }
    }
    // add nodes if size is positive
    else if (size >= 0  & size <= 4) {
        for (i = 0; i < size; i++) {
            printf("Enter data for node %d: ", i+1);
            scanf("%d", &data);
            struct Node* newNode = createNode(data);
            if (head == NULL) {
                head = newNode;
            }
            else {
                struct Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
    }

    // print the final linked list
    printf("Final linked list: ");
    printList(head);

    }

    return 0;
}
