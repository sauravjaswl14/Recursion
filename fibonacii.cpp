//f(n) = f(n-1) + f(n-2);    0 1 1 2 3 5 8 13.....nth term

//Multiple Recursions
#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	if(n==0) return 0;
	if(n==1 || n==2) return 1;
	int lastTerm = fibo(n-1);
	int secondLast = fibo(n-2);
	int nthterm = lastTerm + secondLast;
	return nthterm;

}

int main()
{
	int n;
	cin>>n; //nth term
	cout<<fibo(n);
}