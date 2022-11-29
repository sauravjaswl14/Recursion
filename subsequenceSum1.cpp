//print any 1 subsequence whose sum is sum
//print all the subsequences whose sum is 2

#include<bits/stdc++.h>
using namespace std;

bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
	if(ind == n)
	{
		//condition satisfied
		if(s==sum)
		{
			for(int it : ds)
			{
				cout<<it<<" ";
			}
			cout<<endl;
			return true;
		}
		return false;
	}
	
	ds.push_back(arr[ind]);
	s += arr[ind];
	//pick
	if(printS(ind+1,ds,s,sum,arr,n) == true)
	{
		return true;
	}

	ds.pop_back();
	s -= arr[ind];

	//not pick
	if(printS(ind+1,ds,s,sum,arr,n) == true) return true;
	return false;
}

int main()
{
	int n=3;
	int arr[] = {1,2,1};
	int sum = 2;
	vector<int> ds;
	printS(0,ds,0,sum,arr,n);
}