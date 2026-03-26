// Problem
//
// Our Monk visits a neighbourhood school to teach kids, once a week. This week, they are studying the famous novel "The Three Musketeers" by Alexandre Dumas. As Monk is a fun teacher, he wants to enact a scene from the novel and hence, must choose 3 children from the class as the musketeers.
// There are N children in his class. Monk is given the list of names of the students. Help Monk find the number of ways in which he can choose the musketeers, such that the names of the three children have atleast a vowel in common i.e. the names must have atleast one of ('a', 'e', 'i', 'o', 'u') in common. Two ways are considered different only if atleast one of the chosen student is different.
//
// Input:
// The first line consists of integer T. T testcases follow. The first line of each testcase consists of an integer N, denoting the number of children. It is followed by N lines, wherein each line is a string having only lowercase alphabets ('a'-'z') without spaces, denoting the names of children. A name can have a maximum length of 15 characters.
//
// Output:
// For each testcase, print the answer in a single line. 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// 15 char names so each letter can be vowel or now in order aeiou set if had that vowel
// use && to see common vowel
int M=1e9+7;

int main(int argn, char *argv[]) {
    
    char v[5]={'a','e','i','o','u'};
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<unsigned> bitmap(n,0);
        for (int i = 0; i < n; i++) {
            string na;
            cin>>na;
            unsigned bm=0;
            for(int j=0;j<na.size();j++){
                int cch=na[j];
                for (int i = 0; i < 5; i++) {
                    if (cch==v[i]) {
                        bm=(bm|(1<<i));
                    }
                }
            }
            bitmap[i]=bm;
        }
        // printVect(bitmap);
        
        // now have the bit map => viable pair have 1 common vowel so do & 
        // make freq vector
        vector<unsigned> freq(32,0);
        for (int i = 0; i < n; i++) {
            freq[bitmap[i]]++;
        }
        // printVect(freq);

        ll count=0;
        for (int i = 0; i < 32; i++) {
            for (int j = i; j < 32; j++) {
                for (int k = j; k < 32; k++) {
                    if (i&j&k) {
                        if (i == j && j == k) {
                            count+=(1LL*freq[i]*(freq[i]-1)*(freq[i]-2)/6);
                        }
                        else if(i == j && j != k){
                            count+=(1LL*freq[i]*(freq[i]-1)/2*freq[k]);
                        }
                        else if(i != j && j == k){
                            count+=(1LL*freq[j]*(freq[j]-1)/2*freq[i]);
                        }
                        else{
                            count+=(1LL*freq[i]*freq[j]*freq[k]);
                        }
                    }
                }
            }
        }
        cout<<count<<endl;

        // find number who have a common , e common and so on
    }
    return 0;
}
