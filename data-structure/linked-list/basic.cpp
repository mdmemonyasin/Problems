#include<bits/stdc++.h>
using namespace std;

// while declaring variable struct keyword in mandatory in c and optional in cpp

struct node {
    int data;
    node *next;
    node(int d){
        data = d;
        next = nullptr;
    }
};

// insertion
node* insert(int pos, int k, node* head){
    if(pos==1){
        node *tmp  = new node(k);
        tmp->next = head;
        head = tmp;
    }else{
        node *curr = head;
        for(int i = 0;i<pos-2;i++){
            curr = curr->next;
        }
        node *tmp = new node(k);
        node *t = curr->next;
        curr->next = tmp;
        tmp->next = t;
    }
    return head;
}

node* mid(node *head){
    int cnt = 0;
    node *curr = head;
    while(curr){
        cnt++;
        curr = curr->next;
    }
    curr = head;
    int c = 0;
    while(c<cnt/2){
        curr = curr->next;
        c++;
    }
    return curr;
}

node* deleteNthNode(node *head){
    
}

int main(){
    int n, x;
    cin>>n;
    node *head = nullptr;
    node *tail = nullptr;
    node *tmp = nullptr;
    while(n--){
        cin>>x;
        tmp = new node(x);
        if(!head){
            head = tmp;
            tail = tmp;
        }else{
            tail->next = tmp;
            tail = tmp;
        }
    }
    tmp = head;
    cout<<endl;
    cout<<"Mid: "<<mid(head)->data<<endl;
    while(tmp){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}