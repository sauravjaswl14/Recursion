//reverse array using two pointers left l and right r;
#include<bits/stdc++.h>
using namespace std;

void rev(int l, int r, int arr[])
{
	if(l>=r) return;

	swap(arr[l],arr[r]);
	rev(l+1,r-1,arr);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	rev(0,n-1,arr);

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}