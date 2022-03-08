#include<stdio.h>
#include<stdlib.h> //contains dynamic allocation memory functions
//declaring the structure syntax assign data to the node and pointer to the next node
struct node{
    int data;
    struct node *next;
};
// allocating memory for the node create above for adding el
void addEl(struct node **head_ref, int val){
    struct node *temp; //temporal pointer to the struct through the head_ref
    // allocating memory
    temp = malloc(sizeof(struct node)); //without the type cast
    //assign temp pointer to head_ref
    temp = *head_ref;
    while(temp != NULL){
        temp->data = val;
        temp = temp->next;
    }
}

