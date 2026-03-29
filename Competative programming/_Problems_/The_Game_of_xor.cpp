// Monk and Mariam are playing the game of OXA. The game starts by Mariam writing an array A of N numbers on a sheet of paper. An OXA value can be calculated by choosing a subset of numbers from the set and applying the operations OR-XOR-ADD cyclically i.e. say the chosen numbers are 4, 6, 1, 5, 7 . . . . . , the OXA value of this subset will be = ( ( ( (4 OR 6 ) XOR 1 ) + 5) OR 7) XOR ... and so on, where OR, XOR stand for bitwise OR and XOR operations. The ordering of numbers in the subset will be retained from the main set.
// The challenge for Monk is to observe the numbers carefully and predict the parity of the maximum OXA value possible from any chosen subset of numbers.
//
// The Monk will predict the parity (whether the maximum OXA value is even or odd), in the form string S, which will either contain "Even" or "Odd" (without quotes). If the Monk prediction comes to be true, then he will win the game else Mariam will win the game.
//
// You are given Monk's prediction and the array A, analyze the array and announce the winner of the Game of OXA !
//
// Input:
// The first line consists of an integer T. T testcases follow.
// The first line of each testcase consists of a string S, Monk's prediction.
// The second line of each testcase consists of an integer N.
// In next N lines, each line will contain 1 integer denoting the elements of the array.
//
// Output:
// For each testcase, print the answer in a new line i.e. either "Monk" (without the quotes) or "Mariam" (without the quotes).
//
// Constraints:
// N <16  
// S is either "Even" or "Odd", without the quotes
//
// as N<16 do subset by bit mask


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int ans=INT_MIN;
        int ss=(1<<n);
        vector<int> subset[ss];
        for (int mask = 0; mask < ss; mask++) {
            for (int i = 0; i < n; i++) {
                if (mask&(1<<i)) {
                    subset[mask].push_back(arr[i]);
                }
            }
        }

        int aa=-1;
        for (int i = 0; i < ss; i++) {
            if (subset[i].size()) {
                aa=subset[i][0];
            }
            for (int j = 1; j < subset[i].size(); j++) {
                if (j%3==1) aa|=subset[i][j];
                else if(j%3==2) aa^=subset[i][j];
                else aa+=subset[i][j];
            }
            ans=max(ans,aa);
        }
        if (ans%2==0) {
            if (s=="Even") cout<<"Monk"<<endl;
            else cout<<"Mariam"<<endl;
        }else{
            if (s=="Odd") cout<<"Monk"<<endl;
            else cout<<"Mariam"<<endl;
        }

    }
    return 0;
}

// https://www.hackerearth.com/problem/algorithm/the-game-of-oxa-bb3d2676/
