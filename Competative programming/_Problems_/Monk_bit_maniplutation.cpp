// Problem
//
// Monk loves cycling. He wants to buy his favorite bicycle costing P dollars. But his father won’t give him the money so easily as he wants Monk to understand the importance of money. So they made a deal.
// Monk starts with Zero dollars in his piggybank. On each day, Monk will go to another city where God of Money lives, and will get as much as dollars he wants from him.
//
// At the end of each day, Monk brings the piggybank to his father, who counts the money in the piggybank and deposits as much more money as the amount that is present in the piggybank, which eventually doubles the amount in piggybank. As a result, the money in the piggybank keeps growing. Note that, his father does not deposit any money if the piggybank is empty.
// Monk wants to ask God of Money for as minimum dollars as possible. Find the minimum dollars that Monk has to ask from God of Money, so that he has exactly P dollars in his piggybank, irrespective of the number of days he takes.
//
// Input:
// The first line consists of integer T. T testcases follow. The first line of each testcase consists of an integer P, denoting the cost of the bicycle.
//
// Output:
// For each testcase, print the answer in a single line.


#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(int argn, char *argv[]) {
    int q;
    cin>>q;
    while (q--) {
        ll num;
        cin>>num;
        // last step will be by father as need exactly num ammount
        // as we can increase amount by number of days increased and mathematically to mimimize need 0 or 1 coin on a day to reach the amount so => answer is no of set bits on the number
        ll ctn=0;
        while (num>0) {
            if (num&1) {
                ctn++;
            }
            num=num>>1;
        }
        cout<<ctn<<endl;
    }
    return 0;
}
// https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/
