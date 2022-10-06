#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
void main(){
    count(head);
}
void count(struct node*head){
    int c=0;
    if(head==NULL){
        printf("linked list is empty");
    }else{
        struct node* ptr = NULL;
        ptr=head;
        while(ptr!=NULL){
            c++;
            ptr=ptr -> link;

        }
        printf{"%d",c};
    }
}