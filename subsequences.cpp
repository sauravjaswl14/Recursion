#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[],int n)
{
	if(ind >= n)
	{
		for(auto data:ds)
		{
			cout<<data<<" ";
		}
		if(ds.size() == 0)
		{
			cout<<"{}";
		}
		cout<<endl;
		return;
	}

	ds.push_back(arr[ind]);

	//take or pick the particular element at index and add element in the subsequence
	printF(ind+1,ds,arr,n);

	ds.pop_back();
	//not pick or not take condition, this element is not added in the subsequence
	printF(ind+1,ds,arr,n);	
}

int main()
{
	int n=3;
	int arr[n] = {3,1,2};
	vector<int> ds;
	printF(0,ds,arr,n);
}