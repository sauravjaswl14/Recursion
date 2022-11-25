//print from N to 1 using backtracking

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
	if(n<1) return;
	cout<<n<<endl;
	print(n-1);
}

int main()
{
	int n;
	cin>>n;  //5
	print(n);
}