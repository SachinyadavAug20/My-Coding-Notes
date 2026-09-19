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

// obs
// 1. take 1 and make any number so will work "YES" 
// 2. if 1 not there then, if have 1 odd and 1 even then = "YES"
// 3. if only 2 then, can make only evens

signed main() {
    fastio();
    int q;
    cin>>q;
    while (q--) {
        int n,k,x;
        cin>>n>>k>>x;
        bool isNOdd=n%2;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            while (n--) {
                cout<<1<<" ";
            }
            cout<<endl;
        }else{
            if(k<2){
                cout<<"NO"<<endl;
            }else {
                if(k==2){
                    if(isNOdd){
                        cout<<"NO"<<endl;
                    }else {
                        cout<<"YES"<<endl;
                        n=n/2;
                        cout<<n<<endl;
                        while (n--) {
                            cout<<2<<" ";
                        }
                        cout<<endl;
                    }
                }else{
                    // can use 2 and 3 to make any number as 2n + 2k + 1
                    if(isNOdd){
                        n = n -3;
                        int steps = n/2+1;
                        cout<<"YES"<<endl;
                        cout<<steps<<endl;
                        cout<<3<<" ";
                        n=n/2;
                        while (n--) {
                            cout<<2<<" ";
                        }
                        cout<<endl;
                    }else{
                        cout<<"YES"<<endl;
                        n=n/2;
                        cout<<n<<endl;
                        while (n--) {
                            cout<<2<<" ";
                        }
                        cout<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
