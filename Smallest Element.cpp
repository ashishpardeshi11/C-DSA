#include<bits/stdc++.h>
using namespace std;

	int Smallest(int arr[], int n)
	{
		return*min_element(arr, arr+n);
	}
	
	int main()
	
	{
		int arr[] = {10, 324, 45, 90, 98090};
		
		int n = sizeof(arr) / sizeof(arr[0]);
		
		cout<< Smallest(arr ,n);
		
		return 0;
	}
	
