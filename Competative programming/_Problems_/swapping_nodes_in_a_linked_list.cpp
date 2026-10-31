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
  ListNode *swapNodes(ListNode *head, int k) {
    ListNode *first = head;
    for (int i = 1; i < k; ++i) {
      first = first->next;
    }
    // till fast reaches end the slow will be at the kth from end
    ListNode *slow = head;
    ListNode *fast = first;

    while (fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next;
    }
    swap(first->val, slow->val);

    return head;
  }
};
