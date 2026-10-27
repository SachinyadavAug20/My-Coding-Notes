#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    int pairSum(ListNode* head) {
        // put in array then solved problem
        vector<int> arr;
        while(head!=nullptr){
            arr.push_back(head->val);
            head=head->next;
        }
        int n=arr.size()-1;
        int ans=INT_MIN;
        for(int i=0;i<=n/2;i++){
            ans=max(ans,arr[i]+arr[n-i-1]);
        }
        return ans;
    }
};
