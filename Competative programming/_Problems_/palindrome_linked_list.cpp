#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
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
  bool isPalindrome(ListNode *head) {
      // get the list and revers it
      vector<int> l;
      while(head!=nullptr){
          l.push_back(head->val);
          head=head->next;
      }
      int i=0,j=l.size()-1;
      while(j>i){
          if(l[i]!=l[j]) return false;
          i++;
          j--;
      }
      return true;
  }
};
