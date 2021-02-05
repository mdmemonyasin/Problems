#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node *push(node *head, int data){
    node *newnode = new node(data);
    if(head==NULL){
        head = newnode;
        return head;
    }
    newnode->next = head;
    head = newnode;
    return head;
}

node *pop(node *head){
    if(head == NULL){
        return INT_MAX;
    }
    node *temp = head;
    head = head->next;
    delete(temp);
    return temp;
}

int size(node *head){
    int count = 0;
    while (head!=NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int peak(node *head){
    if(head == NULL){
        return 0;
    }
    return head->data;
}

bool isEmpty(node *head){
    return (head==NULL);
}

int main(){
    node *head = NULL;
    head = push(head, 10);
    head = push(head, 20);
    // cout<<size(head);
    // cout<<peak(head);
    node *poped = pop(head);
    cout<<poped->data<<" ";
}