#include<bits/stdc++.h>
using namespace std;

bool isPossibleToAllocate(int pages[], int n, int numStudents, int val){
    numStudents = numStudents - 1;
    int curr_cnt = 0;
    for(int i=0;i<n;i++){
        if(numStudents==0){
                return false;
        }
        if(pages[i]+curr_cnt>val){
            numStudents--;
            curr_cnt = pages[i];
        }else{
            curr_cnt = curr_cnt + pages[i];
        }
        
    }
    return true;
    
}

int calculateLow(int pages[], int n){
    int currMax = 0;
    for(int i=0;i<n;i++){
        currMax = max(currMax,pages[i]);
    }
    return currMax;
}

int calculateHigh(int pages[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + pages[i];
    }
    return sum;
}

int bookAllocation(int pages[], int n, int numStudents){
    int l = calculateLow(pages,n);
    int h = calculateHigh(pages,n);
    while(l<=h){
        int mid = (l+h)/2;
        if(isPossibleToAllocate(pages, n, numStudents, mid)){
            if(!isPossibleToAllocate(pages, n, numStudents, mid-1)){
                return mid;
            }else{
                h = mid-1;
            }
        }else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int n, numStudents;
    cin >>n >> numStudents;
    int pages[n];
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    cout<<bookAllocation(pages, n, numStudents);
}