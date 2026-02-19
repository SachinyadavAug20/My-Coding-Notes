// Luffy with his crew is on the way to Dressrosa, where he will be fighting one
// of the warlords of the sea Doflamingo. But now he is getting bored and wants
// do a fun activity. He is very much obsessed with palindromes. Given a string
// S of lower case English alphabet of length N and two Integers L and R he
// wants to know whether all the letters of the substring from index L to R (L
// and R included) can be rearranged to form a palindrome or not. He wants to
// know this for Q values of L and R and needs your help in finding the answer.
// Palindrome is a string of characters which when reversed reads same as the
// original String.
//
// CONSTRAINTS:
// 1<t< 10
// 1 < N < 10^5
// Q≤ 100000
// 1sLs R≤ N
// 'a's S[i] s'z' for 1 sis N

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int letterHsh[N][26]; // 26 arrays of N size initilized by 0

int main() {
  int t;
  cin >> t;
  while (t--) {

    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < 26; ++j) {
        letterHsh[i][j] = 0;
      }
    }
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
      letterHsh[1 + i][s[i] - 'a']++; // make hash array of 1 based
    }
    // prefix sum of all 26 array
    for (int i = 0; i < 26; ++i) {
      for (int j = 1; j <= n; ++j) {
        letterHsh[j][i] += letterHsh[j - 1][i];
      }
    }
    while (q--) {
      int l, r;
      cin >> l >> r;
      // int hsh[26];
      //  for (int i = 0; i < 26; ++i)
      //  {
      //     hsh[i]=0;
      //  }
      //  l--;r--;//make 0 index as given is 1 index
      //  for (int i = l; i <=r; ++i)
      //  {
      //   hsh[s[i]-'a']++;//couting has letter 0==>a, 1==>b, 2==>c
      //  }

      int no_of_odds = 0;
      for (int i = 0; i < 26; ++i) {
        int chrCtn = letterHsh[r][i] - letterHsh[l - 1][i];
        if (chrCtn % 2 != 0) {
          no_of_odds++;
        }
      }
      if (no_of_odds > 1) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
  }
}

// O(t*(q*(26+l-r+26))) == O(n*t*q) == 10*10^5*10^5 == 10^11 iteration TLE
// ...l-r=n
// O(t*(26*n+q*(26+26)) == O(t*n) == 10*10*5*26 > 10^7 iteration TLE
