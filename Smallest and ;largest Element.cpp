#include<bits/stdc++.h>
using namespace std;

	int Smallest(int arr[], int n)
	{
		return*min_element(arr, arr+n);
	}
	
	int largest(int arr[], int n)
	{
		return*max_element( arr, arr+n);
	}	
	int main()
	
	{
		int arr[] = {10, 324, 45, 90, 98090};
		
		int n = sizeof(arr) / sizeof(arr[0]);
		
		cout<<"Smallest Number is :"<< Smallest(arr, n)<< endl;
		cout<<"Largest Number is :"<<largest(arr, n);
		
		return 0;
	}
	
