#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"How Many No. You want to Enter In the Array"<<endl;
	cin>>n;
	int i,j,arr[n];
	
	cout<<"Enter Array Elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	system("CLS");
	
	cout<<"Array is : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
//	Now Sorting the Array

	int min_idx;
	
	for(i=0;i<n-1;i++)
	{
		min_idx = i;
		
		for(j=i+1;j<n;j++)
		if (arr[j]<arr[min_idx])
			min_idx = j;
			
		if (min_idx != i) 
			swap(arr[min_idx],arr[i]);   // I am Using BuiltIn Functoin Of Swap.
		
	}
	
//	Sorted Array Showing Code - 
	cout<<"\n Sorted Array is : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}