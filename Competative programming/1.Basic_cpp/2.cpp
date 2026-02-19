#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	t=1;
//have 2*n -1 rows and colume
	int rows,colums;
	rows=colums=2*n-1;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < colums; ++j)
		{

			//find minimum distance from the edge
			cout<<n-min(min(i,j),min(2*n-2-i,2*n-2-j))<<" ";
			// cout<<"("<<i<<","<<j<<")"<<" ";
		}
		cout<<endl;
	}
	return 0;
}