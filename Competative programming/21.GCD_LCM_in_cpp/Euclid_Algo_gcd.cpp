#include <bits/stdc++.h>
using namespace std;
#define ll long long

int MYgcd(int m, int n){
    int divident=max(m,n);
    int divisor=min(m,n);
    if (divident%divisor==0) {
        return divisor;
    }
    return MYgcd(divisor, divident%divisor);
}  // worst case O(logn)

int SIRgcd(int a,int b){
    // No need to check small and big and if small/big it gives remainder as small and the it is dividiing big and becomes big/small 
    if (b==0) return a;
    return SIRgcd(b, a%b);
}

int MYlcm(int a,int b){
    return a*b/MYgcd(a, b);
}

int main(int argn, char *argv[]) {
    cout<<MYgcd(18, 27)<<endl;
    cout<<MYgcd(21, 18)<<endl;
    cout<<MYgcd(12, 18)<<endl;
    cout<<SIRgcd(18, 27)<<endl;
    cout<<SIRgcd(21, 18)<<endl;
    cout<<SIRgcd(18, 12)<<endl;

    cout<<MYlcm(12, 18);
      return 0;
}

