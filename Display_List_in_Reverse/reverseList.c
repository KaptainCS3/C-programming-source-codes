#include<stdio.h>
#include<stdlib.h>

//declare the struct for the linked list
struct linkedList{
    int data;
    struct linkedList *next;
};
// function to print the list in  reverse
void reverseList(struct linkedList **head_ref){
                            /*declaring 3 pointer to handle the,
                            reverse ,refrerencing the head,
                            and navigating through the list*/
        struct linkedList *prev, *curr, *next;
        // initialising pointers
        prev = NULL;
        curr = *head_ref;
        next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
            *head_ref = prev;
}