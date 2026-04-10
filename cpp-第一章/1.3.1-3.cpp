#include <bits/stdc++.h>
using namespace std;


	int gcd(int m,int n)
	{
		if(n==0)
		  return m;
		return gcd(n,m%n);
	}

int main()
{
	cout<<"1£º"<<gcd(20,8)<<endl;
	cout<<"2£º"<<gcd(36,64)<<endl; 
	
	return 0;
} 
