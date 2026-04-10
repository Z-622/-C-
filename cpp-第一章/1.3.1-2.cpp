#include <bits/stdc++.h>
#include<string>
using namespace std;

string add(const string &s1,const string &s2); 
double add(double a,double n);


int main()
{
	cout<<add("hello","world")<<endl;
	cout<<add(3,5)<<endl;
	cout<<add('3','5');
	return 0;
} 

string add(const string &s1,const string &s2)
{
	return s1+s2;
}
double add(double a,double n)
{
	return a+n;
}
