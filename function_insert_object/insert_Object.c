#include<stdio.h>
#include<stdlib.h>

struct labObject{
    int code;
    char type[25];
    char des[80];
    struct labObject *next;
};
void insertObject(struct labObject **head, int c, char t[25], char d[80]){
    struct labObject *temp = malloc(sizeof(struct labObject));
                        temp = *head;
                while(temp != NULL){
                    temp->code = c;
                    temp->type = t;
                    temp->des = d;
                    // temp = temp->next;
                    *head = temp;
                    return 1;
                }
                else
                return -1;
}