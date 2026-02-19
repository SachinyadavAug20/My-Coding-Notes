#include<bits/stdc++.h>
using namespace std;
int trash(){
		for (int i = 0; i < 10;cout<<++i<<"\n"){}
		int f=10;
	for (; f !=0; cout<<f--<<"\n"){}
	return 0;
}
int main(){
	int n,t;
	cin>>t;
	while(n--){
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
				cout<<"*";			
		}
		cout<<'\n';
	}
}
	return 0;
}