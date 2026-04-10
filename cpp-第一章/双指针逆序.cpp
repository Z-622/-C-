#include <iostream>
 using namespace std;
 
void printArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"";
	}
	cout<<endl;
} 

void reverse (int array[],int size)
{
	int left =0;
	int right =size -1;
	
	while (left<right)
	{
		int temp =array[left];
		array [left]=array[right];
		array [right]=temp;
		
		left++;
		right--;
	}
} 
int main(){
	int arr[]={1,2,3,4,5,6};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<"原数组：";
	printArray(arr,n);
	reverse (arr,n);
	cout<<"逆序后：";
	printArray(arr,n);
	
	return 0; 
}
