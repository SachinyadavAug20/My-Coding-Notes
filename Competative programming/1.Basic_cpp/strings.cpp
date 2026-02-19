#include <bits/stdc++.h>
using namespace std;
void trash(){
	string str="Sachin";
	string str2;
	cin>>str2;
	cout<<str+str2<<endl;
	cout<<(str+str2).size()<<endl;
	for (int i = 0; i < str.size(); ++i)
	{
		cout<<str[i]<<endl;
	}
}
void trash1(){
	int n;
	cin>>n;
	cin.ignore();//to clear input buffer of \n OR " "
	while(n--){
	string str;
	getline(cin,str);
	cout<<str<<endl;
	}
}
void trash2(){
// 	//invert a given string
// 	cout<<reverse_sring("sachin")<<endl;
// 	string str;
// 	cin>>str;
// 	string reverse_string;
// 	for (int i = str.size()-1;i+1;--i)
// 	{
// 		reverse_string.push_back(str[i]);
// 	}
// 	cout<<reverse_string<<endl;
// 	if(str==reverse_string){
// 		cout<<"Palendrome"<<endl;
// 	}
// 	else{
// 		cout<<"not a Palendrome"<<endl;
// 	}
// 	cout<<palendrom_checker("mam");
}
string reverse_sring(string a){
	string temp=a;
	int j=0;
	for (int i = a.size()-1; i+1; --i)
	{
		a[j]=temp[i];
		j++;
	}
	return a;
}

string palendrom_checker(string a){
	for (int i = 0; i < a.size()/2; ++i)
	{
		if(a.size()==1||a.size()==1){
			cout<<"YES";
			return 0;
		}
		if (a[i]==a[a.size()-1-i])
		{
			continue;
		}
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
	return 0;
}

int main(){
	//big number ad input greater than 1e+18 value of Lon long int
   std::string big_number;
       std::cin >> big_number;
       std::cout << "Original number: " << big_number << std::endl;
   
       int i = big_number.length() - 1;
       while (i >= 0) {
           // Add 1 to the current digit
           big_number[i]++;
   
           // If the digit is now less than or equal to '9', we are done.
           // This happens if the original digit was '0' through '8'.
           if (big_number[i] <= '9') {
               break; // No carry needed, exit the loop
           }
   
           // If we are here, the digit was '9'. It became ':' (ASCII value after '9').
           // We set it to '0' and let the loop continue to handle the carry.
           big_number[i] = '0';
           i--;
       }
   
       // If the loop finished because i became -1, it means all digits were '9'.
       // We need to add a '1' to the very beginning of the string.
       if (i < 0) {
           big_number.insert(0, "1");
       }
   
       std::cout << "Number after adding 1: " << big_number << std::endl;
       return 0;
   }