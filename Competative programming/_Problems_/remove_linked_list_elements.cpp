#include <algorithm>
#include <bits/stdc++.h>
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;  
        vector<int> l;
        while(head!=nullptr){
            if(head->val!=val) l.push_back(head->val);
            head=head->next;
        }
        if(l.size()==0) return nullptr;
        ListNode* newHead=new ListNode(l[0]);
        ListNode* curr=newHead;
        for(int i=1;i<l.size();i++){
            newHead->next=new ListNode(l[i]);
            newHead=newHead->next;
        }
        return curr;
    }
};
