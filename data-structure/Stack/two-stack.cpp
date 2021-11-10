#include<bits/stdc++.h>
using namespace std;

struct Stack {
    int size,top1,top2;
    int* arr;
    Stack(int c){
        size = c;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int n){

    }
    void push2(int n){

    }
    int pop1(){

    }
    int pop2(){

    }
    bool isFull1(){

    }
    bool isFull2(){

    }
    bool isEmpty1(){

    }
    bool isEmpty2(){
        
    }
};

int main(){
    Stack s(10);
    cout<<s.size;
}