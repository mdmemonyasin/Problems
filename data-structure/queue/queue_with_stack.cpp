#include<bits/stdc++.h>
using namespace std;

class queueByStack{
    public:
    // Here we are assuming that user will not call pop in case of underflow and push in case of overflow
    stack<int> s1, s2;
    int front;
    void push(int x){
        if(s1.empty()){
            front = x;
        }
        s1.push(x);
        return;
    }
    int pop(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int retValue = s2.top();
        s2.pop();
        while(!s2.empty()){
            if(s1.empty()) front = s2.top();
            s1.push(s2.top());
            s2.pop();
        }
        return retValue;
    }
    int peek(){
        return front;
    }
    bool empty(){
        return s1.empty();
    }
    // void print(){
        // while()
    // }
};


int main(){
    queueByStack q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    // cout<<q1.peek()<<endl;
    // cout<<q1.empty()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    q1.push(5);
    
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    // cout<<q1.peek()<<endl;
}