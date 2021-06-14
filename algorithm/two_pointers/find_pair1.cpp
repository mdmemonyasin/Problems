// Print Count of pairs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, ans = 0;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0, j = n-1;
    while(i<j){
        int currSum = arr[i] + arr[j];
        if(currSum > sum){
            j--;
        }else if(currSum < sum){
            i++;
        }else{
            if(arr[i] == arr[j]){
                int l = j-i+1;
                ans += (l * (l-1)) / 2;
                break;
            }
            int v1 = arr[i], v2 = arr[j], cnt1 = 0, cnt2 = 0;
            while(arr[i] == v1){
                cnt1++;
                i++;
            }
            while(arr[j] == v2){
                cnt2++;
                j--;
            }
            ans += (cnt1 * cnt2);
        }
    }
    cout<<ans<<endl;
}