#include<bits/stdc++.h>
using namespace std;

int *getDiag(int** matrix, int n)
{
	int*diag =new int [n];
	for (int i=0;i<n;i++)
	 {
	 	diag[i]=matrix[i][i];
	 }
	  return diag ;
}

int main()
{
	
	int**data,n=5;
	data=new int*[n];
	for(int i=0;i<n;i++)
	 data[i]=new int[n];
	for(int i=0;i<n;i++)
{
		 for(int j=0;j<n;j++)
	       data[i][j]=i+j; 
}
	  int *diag=getDiag(data,n);
    for(int i=0;i<n;i++)
 cout<<diag[i]<<endl;
 delete[]diag;
 for(int i=1;i<n;i++)
{
	  delete data [i];
      delete data ;
}
  return 0;
} 

