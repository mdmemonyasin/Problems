#include<bits/stdc++.h>
using namespace std;

class Stack {
    int *a;
    int capacity;
    int top;
    public:
    Stack(int c){
        a = new int[capacity];
        capacity = c;
        top = -1;
    }
    void push(int d){
        if(top == capacity-1){
            cout<<"Overflow";
            return;
        }
        top++;
        a[top] = d;
    }
    int pop(){
        if(top==-1){
            cout<<"Underflow";
            return 0;
        }
        int res = a[top];
        top--;
        return res;
    }
    int peak(){
        return a[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return (top==-1);
    }
};

int main(){
    Stack s1 = Stack(10);
    // s1.push(1);
    // s1.push(2);
    // s1.push(3);
    // cout<<s1.size()<<endl;
    // cout<<s1.pop()<<endl;
    cout<<s1.isEmpty()<<endl;
}