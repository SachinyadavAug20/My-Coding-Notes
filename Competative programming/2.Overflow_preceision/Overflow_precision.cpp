#include<bits/stdc++.h>
using namespace std;
void trash(){
 //    int a=712;
 //  int b=3;
 //  char c='a';
 //  cout<<c<<"\n"<<a<<"\n"<<b;
 //  long int x=2376723;
 //  long long int y=843746327264345345;
 //  cout<<x<<" < "<<y<<endl<<x*y;
 //   int a;
 // double b;
 // char c;
 // cin>>a>>b>>c;
 // cout<<a<<" "<<b<<' '<<c<<' '<<(int) c;//9 as character is 57 in ASCII
}

int main(){
// cout<<7*2/3<<endl;
// out<<7/2*3;
   int a=100000;
   int b=100000;
   long int c=a*1LL*b;//1LL is 1 long long integer
   cout<<c<<endl;//pverflowed as int is rougly (-10000000000,10000000000)
   double x=100000;
   double y=100000;
   cout<<fixed<<setprecision(0)<<x*y<<"\n";
   double z=1e+24;
   cout<<fixed<<setprecision(0)<<z;

 return 0;
}
