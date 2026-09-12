#include<bits/stdc++.h>
#include <vector>
using namespace std;

// (bool)can reverse a subarray of size at most k -> can array be sorted by this k
//
// Obs
// 1) if k==n then always YES
// 2) 1second = 10^8 operation, q<=100 thus, for each query have 10^6 operations but, n,k<=100 thus, O(n^3) will work
// 3) k>=2 mean any element can reach any place and can be sorted easy thus solved.
// 4) if array is unorded and k<2 then, NO : YES

int main(){
    int q;
    cin>>q;
    while (q--) {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        bool isSorted=1;
        for (int i=0; i<n-1; i++) {
            if(arr[i]>arr[i+1]) isSorted=0;
        }
        cout<<(isSorted?"YES":k>=2?"YES":"NO")<<endl;
    }
}
