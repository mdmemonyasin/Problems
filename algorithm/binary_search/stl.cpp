#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 1, 1, 2, 2 , 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;

    int *upperBound = upper_bound(arr, arr + size, 3);

    cout<<*upperBound<<endl;

}