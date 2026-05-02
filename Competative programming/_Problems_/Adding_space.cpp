// https://leetcode.com/problems/adding-spaces-to-a-string/description/
// You are given a 0-indexed string s and a 0-indexed integer array spaces that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.

//     For example, given s = "EnjoyYourCoffee" and spaces = [5, 9], we place spaces before 'Y' and 'C', which are at indices 5 and 9 respectively. Thus, we obtain "Enjoy Your Coffee".
// Return the modified string after the spaces have been added.
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

string addSpaces(string s, vector<int>& spaces) {
    int n=spaces.size();
    string ans;
    char space=' ';
    vector<string>substring(n+1); //  n spaces => n+1 string
    substring[0]=s.substr(0,spaces[0]);
    for(int i=1;i<n;i++){
        substring[i]=s.substr(spaces[i-1],spaces[i]-spaces[i-1]);
    }
    substring[n]=s.substr(spaces[n-1],s.size()-spaces[n-1]);

    ans.append(substring[0]);
    for(int i=1;i<n;i++){
        ans.append(space+substring[i]);
    }
    ans.append(space+substring[n]);
    return ans;
}

int main(int argn, char *argv[]) {
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //
    //     }
    // }
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<int> spaces(n);
    for(int i=0;i<n;i++){
        cin>>spaces[i];
    }
    cout<<addSpaces(s, spaces);

     
  return 0;
}
