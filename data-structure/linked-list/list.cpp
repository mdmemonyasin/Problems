#include<bits/stdc++.h>
using namespace std;
 
class node {
    public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = nullptr;
    }  
};

class linkedList {
    node* head;
    public:
    linkedList(){
        head = nullptr;
    }
    // insert data at the end of the linked list
    node* insert(int);
    // print linked list
    void print();
    // delete node at given position
    void deleteNode(int);
};  

