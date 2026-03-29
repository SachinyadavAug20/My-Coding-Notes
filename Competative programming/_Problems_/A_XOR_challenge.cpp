// You are given an integer such that the XOR of two integers is . In short (⊕ denotes the bitwise the XOR operation).
//
// Out of all possible pairs of and , you must find two integers such that their product is maximum. 
//
// Let us define as the length of in its binary representation. Then, and .
//
// Input format 
//
// A single integer representing ()
//
// Output format 
//
// Print the maximum product you can achieve under the given conditions.
// Sample Input
//
// 13
//
// Sample Output
//
// 70

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(int argn, char *argv[]) {
    int c;
    cin>>c;
    int bitCtn=(int)log2(c)+1;
    int a=0,b=0;
    vector<int> set_bits;
    for (int i = 0; i < bitCtn; i++) {
        bool currentBt=(c&(1<<i));
        if (currentBt==0) {
            a=a|(1<<i);
            b=b|(1<<i);
        }else{
            set_bits.push_back(i);// store index of set bit
        }
    }
    // make all subset of set_bits
    ll ans=-1;
    int sz=(1<<set_bits.size());
    for (int mask = 0; mask < sz ; mask++) {
        int a_copy=a;
        int b_copy=b;
        for (int  j = 0; j < set_bits.size() ; j++) {
            if (mask&(1<<j)) {
                a_copy|=(1<<set_bits[j]);
            }else{
                b_copy|=(1<<set_bits[j]);
            }
            ans=max(ans,a_copy*1LL*b_copy);
        }
    }
    cout<<ans<<endl;

    return 0;
}
