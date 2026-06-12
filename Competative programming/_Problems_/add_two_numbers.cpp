// https://leetcode.com/problems/add-two-numbers/submissions/2029987616/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class SolutionBAD {
public:
  // way 
  // make a array add them and then make new list to store and retur
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int n1=0,n2=0;
    int i=1;
    while (l1!=NULL) {
      n1+=l1->val*i;
      l1=l1->next;
      i*=10;
    }
    i=1;
    while (l2!=NULL) {
      n2+=l2->val*i;
      l2=l2->next;
      i*=10;
    }
    cout<<n1<<" "<<n2<<endl;
    int ans=n1+n2;
    vector<int> arr;
    while (ans) {
      arr.push_back(ans%10);
      ans/=10;
    }
    int n=arr.size();
    if(n==0){
      return new ListNode(0);
    }
    ListNode* head=new ListNode(arr[0]);
    ListNode* temp=head;
    for(int i=1;i<n;i++){
      temp->next=new ListNode(arr[i]);
      temp=temp->next;
    }
    return head;
  } // wrong answer as can't do 100 digit number using int /long
};

class Solution {
public:
  // adding number digit by digit
  // but number are in reverse order => helps
  // edges :
  // 1. l1 and l2 can have differnt size (append left element)
  // 2. if kary is non-zero and both l1 and l2 exaust together
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int kary=0;
    ListNode* head=new ListNode((l1->val+l2->val)%10);
    kary=(l1->val+l2->val)/10;
    // move
    l1=l1->next;
    l2=l2->next;
    ListNode* temp=head;
    while (l1&&l2) {
      int n1=l1->val;
      int n2=l2->val;
      temp->next=new ListNode((n1+n2+kary)%10);
      temp=temp->next;
      kary=(n1+n2+kary)/10;
      // move
      l1=l1->next;
      l2=l2->next;
    }
    while(l1) {
      int n1=l1->val;
      temp->next=new ListNode((n1+kary)%10);
      temp=temp->next;
      kary=(n1+kary)/10;
      // move
      l1=l1->next;
    }
    while(l2) {
      int n2=l2->val;
      temp->next=new ListNode((n2+kary)%10);
      temp=temp->next;
      kary=(n2+kary)/10;
      // move
      l2=l2->next;
    }
    if(kary!=0){
      temp->next=new ListNode(kary);
    }
    return head;
  } // O(n) time and O(n) space
};
