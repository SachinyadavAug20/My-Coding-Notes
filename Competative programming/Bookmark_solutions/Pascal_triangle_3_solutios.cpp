#include <bits/stdc++.h>
using namespace std;

// int factorial(long long int n){
// if(n==0||n==1){
// 	return 1;
// }
// return n*factorial(n-1);
// }

void my_solution(){
	int t;
	cin>>t;
	while(t--){
		long long int n,temp;
		cin>>n;
		for (long long int i = 0; i < n; ++i){

			for(long long int j=0;j<=i;j++){
				if(j==0){
					cout<<1<<" ";
					temp=1;
					continue;
				}
				if(i==j){
					cout<<1<<" ";
					break;
				}

				cout<<(temp*(i-j+1))/j<<" ";
				temp=(temp*(i-j+1))/j;
			}

			cout<<endl;
		}
	}
}
void sir_solution(){
	// sir's solutions
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n][n];
		arr[0][0]=1;
		for (int i = 1; i < n; ++i)
		{
			arr[i][0]=1;
			arr[i][i]=1;
			for (int j = 1; j < i; ++j)
			{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			}
		}
	

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
}
int main(){
	// my_solution();
// sir_solution();
	//Unique most optamize solution
	int t;
	// give maximum sie of passcal triange is 40 so make a 41 size one in advance
	int N=41;
	long long int arr[N][N];
	for (int i = 0; i < N; ++i)
	{
		arr[i][0]=1;
		arr[i][i]=1;
		for (int j = 1; j < i; ++j)
		{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
