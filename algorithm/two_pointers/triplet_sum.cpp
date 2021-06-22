#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }
        int a = i+1, b = n-1;
        while(a < b){
            int rem = -1 * arr[i];
            if(arr[a] + arr[b] == rem){
                cout<<arr[i]<<" "<<arr[a]<<" "<<arr[b]<<endl;
                if(arr[a] == arr[b]) break; //For handeling equal case where both pointer are pointing to same element.
                int v1 = arr[a], v2 = arr[b];
                while(arr[a] == v1){
                    a++;
                }
                while(arr[b] == v2){
                    b--;
                }
            }
            else if(arr[a] + arr[b] > rem){
                b--;
            }else{
                a++;
            }
        }
    }
}


// set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 // cout << arr[i] << " " << arr[j] << " " << arr[k] << arr[i] + arr[j] + arr[k] << endl;
//                 if (arr[i] + arr[j] + arr[k] == 0 && (s.find(arr[i]) == s.end() || s.find(arr[j]) == s.end() || s.find(arr[k]) == s.end()))
//                 {
//                     cout << "ans : "<< arr[i] << " " << arr[j] << " " << arr[k] << endl;
//                     s.insert(arr[i]);
//                     s.insert(arr[j]);
//                     s.insert(arr[k]);
//                 }
//             }
//         }
//     }