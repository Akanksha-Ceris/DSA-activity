#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
}

    void count_of_nodes(struct node *head){
        int count =0;
        if(head == NULL)
            printf("Linked List is empty");
        while(ptr !=NULL){
            count++;
            ptr = ptr->link;
        }
        printf("%d",count);
        return 0;
    }
