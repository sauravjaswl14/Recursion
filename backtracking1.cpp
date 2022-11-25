//print from 1 to N using backtracking

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
	if(n<1) return;
	print(n-1);
	cout<<n<<endl;
}

int main()
{
	int n;
	cin>>n;  //5
	print(n);
}