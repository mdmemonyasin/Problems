#include<bits/stdc++.h>
using namespace std;

struct node {
    int val;
    int *next;
};

bool check(node *curr){
    while(curr!=Null && curr->next!=Null){
        if(curr->value < curr->next->value){
            return false;
        }
    }
    return true;
}


int main(){
    // find starting point
    node *curr = head;
    int node_count = 1;
    while(curr!=Null && curr->next!=Null){
        if(curr->value > curr->next->value){
            node *startingPoint = curr;
            break;
        }
        curr = curr->next;
        node_count++;
    }

    // go with the starting point
    while(curr!=NULL && curr->next!=Null){
        if(node_count == M){
            if(check()){

            }
        }
        if(curr->value > curr->next->value){
            // Do whasoever
        }
        curr = curr->next;
        node_count++;
    }

}