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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *head=list1;
        for(int i=0;i<a-1;i++) head=head->next;
        ListNode *temp=head;
        for(int i=0;i<b-a;i++) temp=temp->next;
        ListNode *tail=temp;
        while(list2!=NULL){
            head->next=list2;
            list2=list2->next;
            head=head->next;
        }
        head->next=tail;
        return list1;
    }
};
