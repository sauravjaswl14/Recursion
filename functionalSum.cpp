//find sum of n natural numbers
#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	if(n==0) return 0;
	return n + sum(n-1);//n+sum(2)->n+sum(1)->n+sum(0)
}

int main()
{
	int n;
	cin>>n;
	cout<<sum(n);
}