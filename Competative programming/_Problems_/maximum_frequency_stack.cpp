// https://leetcode.com/problems/maximum-frequency-stack/submissions/2014761243/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class FreqStack {
public:
    // logic
    // make s map of stack push in each
//                                 BUCKET SORT APPROACH
// ================================================================================
//
//    [ BUCKET/FREQUENCY TABLE ]                [ INPUT ARRAY PROCESSING ]
//    +-------+-----------------+         1  2  3  
//    | Count | Group           |        +----+  +---+  +---+  +---+  +---+  +---+  +---+
//    +-------+-----------------+        |5, 4|  | 5 |  | 3 |  | 4 |  | 2 |  | 5 |  | 3 |
//    |   1   | [ 5, 4, 3, 2 ]  |        +----+  +---+  +---+  +---+  +---+  +---+  +---+
//    |   2   | [ 5, 4, 3 ]     |          ^       ^      ^      ^      ^      ^      ^
//    |   3   | [ 5 ]           |       (Orange) (Purp) (Orng) (Purp) (Blue) (Grn)  (Purp)
//    +-------+-----------------+
//    |   4   | [ 5 ]           |               Current Element Tracking:
//    +-------+-----------------+               5
//
//
//    -------------------------------------------------------------------------
//    [ ALGORITHM STEPS ]
//
//    1) Count of most frequent Val   -->   Hashmap & Max
//    2) Map Count -> Vals            -->   (Bucket Array / Grouping)
// ================================================================================


    const int N=3e4;
    unordered_map<int, int> hsh;
    unordered_map<int,stack<int>> stk;
    int maxFreq=0;
    void push(int val) {
      hsh[val]++;
      stk[hsh[val]].push(val);
      maxFreq=max(maxFreq,hsh[val]);
    }
    
    int pop() {
        int i=maxFreq;
        while(stk[i].empty()){
            i--;
        }
        maxFreq=i;
        int a = stk[maxFreq].top();
        hsh[a]--;
        stk[maxFreq].pop();
        return a;
    }
};

