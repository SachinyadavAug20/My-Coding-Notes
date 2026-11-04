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
  ListNode *mergeNodes(ListNode *head) {
    ListNode *modify = head->next;
    ListNode *curr = head->next;

    int sum = 0;
    while (curr != nullptr) {
      if (curr->val != 0) {
        sum += curr->val;
      } else {
        modify->val = sum;
        sum = 0;

        if (curr->next != nullptr) {
          modify = modify->next;
        }
      }
      curr = curr->next;
    }
    modify->next = nullptr;
    return head->next;
  }
};
