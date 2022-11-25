//check if a given string is palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string &s)
{
	if(i>=s.size()/2) return true;

	if(s[i] != s[s.size()-i-1])
	{
		return false;
	}
	else{
		checkPalindrome(i+1,s);
	}
}

int main()
{
	string str;
	cin>>str;
	cout<<checkPalindrome(0,str);
}