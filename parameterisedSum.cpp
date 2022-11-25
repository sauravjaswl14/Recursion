//sum of n natural numbers
#include<bits/stdc++.h>
using namespace std;

void print(int i, int sum)
{
	if(i<1)
	{
		cout<<sum;
		return;
	}
	print(i-1,sum+i);//(2,0+3)->(1,3+2)->(0,5+1)
}

int main()
{
	int n;
	cin>>n;
	print(n,0);//(3,0)
}