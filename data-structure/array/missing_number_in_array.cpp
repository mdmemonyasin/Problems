#include<bits/stdc++.h>
using namespace std;

void printAllSubSet(string& set, int i, string tmp){
    if(i=='\0'){
        cout<<tmp;
        return;
    }
    printAllSubSet(set, i+1, tmp+set[i]);
    printAllSubSet(set, i+1, tmp);
}


int main(){
    string set;
    cin>>set;
    string tmp = "";
    printAllSubSet(set, 0, tmp);
}