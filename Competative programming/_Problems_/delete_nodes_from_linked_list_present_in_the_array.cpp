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
  ListNode *modifiedList(vector<int> &nums, ListNode *head) {
    unordered_set<int> num_set(nums.begin(), nums.end());// O(1) find
    ListNode dummy(0, head);
    ListNode *curr = &dummy;
    while (curr->next != nullptr) {
      if (num_set.count(curr->next->val)) {
        ListNode *temp = curr->next;
        curr->next = curr->next->next;
      } else {
        curr = curr->next;
      }
    }

    return dummy.next;
  }
};
