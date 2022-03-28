#include<bits/stdc++.h>
using namespace std;
#define ll long long

int char2digit(char ch)
{
    return ch - '0';
}

// Count number of digits
int countDigits(ll num){
    if(num == 0) return 1;
    int count = 0;
    while(num){
        count++;
        num /= 10;
    }
    return count;
}

// Calculate Digit Sum
int getDigitSum(ll num){
    int sum = 0;
    while(num){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

ll getDigitSum(const string& str){
    int size = str.length();
    ll sum = 0;
    for(int i = 0;i<size;i++){
        sum += char2digit(str[i]);
    }
    return sum;
}

ll getSumOfP(const string& str, int k){
    ll sum = getDigitSum(str);
    return sum * k;
}

int getSuperDigit(ll num){
    int k = countDigits(num);
    if(k==1) return num;
    int sum = getDigitSum(num);
    return getSuperDigit(sum);
}

int findSuperDigit(const string &n, int k){
    if(n.size()==1 && k==1) return char2digit(n[0]);
    ll sum = getSumOfP(n, k);
    return getSuperDigit(sum);
}

int main(){
    string n;
    int k;
    cin >>n >> k;
    cout<<findSuperDigit(n,k);
}