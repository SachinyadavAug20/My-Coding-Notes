#include <bits/stdc++.h>
using namespace std;
// User function template for c++
string interpret(string command) {
    string output;
    for(int i=0;i<command.size();i++){
        if(command[i]=='G'){
            output.push_back('G');
        }
        else if(command[i]=='('&&command[i+1]=='a'){
            output.push_back('a');
            output.push_back('l');
            i+=3;
        }
        else if(command[i]=='('){
            output.push_back('o');
            i++;
        }
	}
   return output;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	string J,S;
	int n=0;
	cin>>J>>S;
	for (int i = 0; i < J.size(); ++i)
	{
		for (int j = 0; j < S.size(); ++j)
		{
			if( S[j]==J[i] && i==J.find(J[i]) ){
				n++;
			}
		}
	}
	cout<<n<<endl;
}
	return 0;
}