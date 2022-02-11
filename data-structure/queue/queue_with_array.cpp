#include<bits/stdc++.h>
using namespace std;

class customQueue{
    public:
    int size, front, back;
    int *arr;
    customQueue(int s){
        size = s;
        front = 0;
        back = 0;
        arr = new int(s);
    }
    void push(int x){
        //check for overflow
        if(back == size-1){
            cout << "Overflow";
            return;
        }
        arr[back++] = x;
        return;
    }
    int pop(){
        //check for underflow
        if(front==back){
            cout<<"Undeflow";
            return -1;
        }
        int tmp = arr[front];
        front++;        
        return tmp;
    }
};
int main(){
    
}