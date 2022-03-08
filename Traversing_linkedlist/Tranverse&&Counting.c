#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void count(struct node *head){
    int count;
    if(head == NULL)
    printf("List is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
         count++;
        ptr = ptr->next;
    }
    printf("%d", count);
}
void printData(struct node *head){
    if(head == NULL)
    printf("The list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
    
}