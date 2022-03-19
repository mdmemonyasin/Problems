#include<bits/stdc++.h>
using namespace std;
class queueWithStack{
	public:
		stack<int> s1, s2;
		int bottomOfS1;
		void push(int x){
			if(s1.empty()){
				bottomOfS1 = x;
			}
			s1.push(x);
		}
		int pop(){
			if(s2.empty()){
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
			}
			int ans = s2.top();
			s2.pop();
			return ans;
		}
		int peek(){
			if(s2.empty()){
				if (s1.empty()) return -1;
				return bottomOfS1;
			}
			return s2.top();
		}
		bool isEmpty(){
			return (s1.empty() && s2.empty());
		}
};

int main(){
	queueWithStack q;
	q.push(10);
	q.push(9);
	q.push(4);
	cout<<q.pop()<<endl;
	cout<<q.peek()<<endl;
	q.push(5);
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.peek()<<endl;
	cout<<q.pop()<<endl;
}


