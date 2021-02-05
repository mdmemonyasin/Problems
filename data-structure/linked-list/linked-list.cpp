#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *next;
    int data;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *insertAtBeg(node *head, int data)
{
    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    newnode->next = head;
    head = newnode;
    return head;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

node *insertAtEnd(node *head, int data){
    node *newnode = new node(data);
    if(head==NULL){
        head = newnode;
        return head;
    }
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

node *delHead(node *head){
    if(head==NULL){
        return NULL;
    }
    node *temp = head;
    head = head->next;
    delete(temp);
    return head;
}

node *delTail(node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete(head);
        return NULL;
    }
    node *temp = head;
    node *prev = NULL;
    while(temp->next!=NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete(temp);
    return head;
}

int searchll(node *head, int key){
    int count = 1;
    while(head!=NULL){
        if(head->data == key){
            return count;
        }
        count++;
        head = head->next;
    }
    return -1;
}
int pos = 1;
int search_recursive(node *head, int key){
    if(head==NULL){
        return -1;
    }
    if(head->data == key){
        return pos;
    }
    pos++;
    return search_recursive(head->next,key);
}

void middle(node *head){
    node *fast= head;
    node *slow = head;
    node *temp = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<slow->data<<endl;
}

//Using two traversal
void print_nth_node(node *head, int n){
    if(head==NULL){
        return;
    }
    int count = 0;
    node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    if(n>count){
        return;
    }
    for(int i=1;i<(count-n+1);i++){
        head = head->next;
    }
    cout<<head->data;
}

// void print_nth_node2(node *head, int n){
//     node *slow = *fast = head;
//     for(int i=0;i<n;i++){
//         if(fast == NULL){
//             return;
//         }
//     }
// }

node *reverse(node *head){
    node *curr = head;
    node *prev = NULL;
    node *next;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *reverse_recursive(node *head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }

    
    node *rest_head = reverse_recursive(head->next);
    node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

node *reverse_group(node *head, int k){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node *curr = head;
    node *prev  = NULL;
    node *next = NULL;
    int count = 0;
    while(curr!=NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    node* new_head =  reverse_group(curr, 3);
    head->next = new_head;
    return prev;
}

node *reverse_group_iterative(node *head, int k){
    node *curr = head;
    node *prev = NULL;
    node *prev_head = head;
    bool isFirstPass = true;
    while(curr!=NULL){
        int count = 0;
        node *first = curr;
        while(curr!=NULL && count<k){
            node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(isFirstPass){
            
            head = prev;
            isFirstPass = false;
        }else
        {
            prev_head->next = prev;
            prev_head = first;
        }
    }
    return head;
}

node *segregate(node *head){
    node *tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node *curr = head;
    node *end = tail;
    node *prev = NULL;
    while(curr!=NULL && curr->data%2!=0){
        node *odd_node = curr;
        head = curr->next;
        tail->next = odd_node;
        odd_node->next = NULL;
        prev  = curr;
        curr = curr->next;
        tail = odd_node;
    }
    while(curr!=end)
    {
        if(curr->data%2!=0){
            node *odd_node = curr;
            prev->next = curr->next;
            tail->next = odd_node;
            odd_node->next = NULL;
            tail = odd_node;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;


}

int main()
{
    node *head = NULL;
    // node *head = new node(20);
    // head->next = new node(30);
    // head->next->next = new node(40);
    // head = insertAtBeg(head,10);
    // head = insertAtBeg(head,20);
    // head = insertAtBeg(head,30);
    // head = insertAtEnd(head,40);
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head,4);
    head  =insertAtEnd(head, 5);
    head = insertAtEnd(head, 6);
    // head = delHead(head);`
    // head = delHead(head);
    // head = delHead(head);
    print(head);
    // head = delTail(head);
    // head = delTail(head);
    // head = delTail(head);
    // print(head);
    // cout<<search_recursive(head, 200);
    // cout<<searchll(head, 400);
    // middle(head);
    // print_nth_node(head, 5);
    // head = reverse(head);
    // head = reverse_recursive(head);
    // head = reverse_group(head, 3);
    // head = reverse_group_iterative(head, 3);
    head = segregate(head);
    // print(head);

}