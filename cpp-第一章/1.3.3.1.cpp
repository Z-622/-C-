#include<iostream>
using namespace std;	

	int * getDiagonal(int ** matrix,int n)
	{
		int*diagonal =new int[n];
		for(int i=0;i<n;i++)
		{
			diagonal[i]=matrix[i][i];
		}
		return diagonal;
	}
	int main()
	{
		int n = 5;
		int ** data = new int* [n];
		for(int i=0;i<n;i++)
		{
			data[i]=new int[n];
		}
		for (int i = 0;i < n;i++)
		{
			for(int j=0;j<n;j++)
			{
				data[i][j] = i * n + j + 1;
			}
	}
	int* diagonal = getDiagonal(data, n);
	for (int i = 0;i < n;i++)
		{
			cout<<diagonal[i]<<endl;
		}
	delete[] diagonal;	
	for (int i = 0;i < n;i++)
	{
		delete[] data[i];
	}
	delete[] data;
}