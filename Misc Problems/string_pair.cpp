#include <bits/stdc++.h>
#include<thread>
using namespace std;

void fun(int x){
    for(int i = 0;i<x;i++){
        cout<<"I am printing : "<<i<<endl;
    }
}

int main()
{
    thread t1(fun, 5);
    thread t2(fun, 10);
    t1.join();
    t2.join();
}