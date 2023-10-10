#include<bits/stdc++.h>
using namespace std;

	int main()
	{
		int arr[] = { 1, 2, 2, 3, 5}; 
		
		int n = sizeof(arr)/sizeof(arr[0]);
		
		cout<<" sum of givien array " << accumulate(arr, arr + n, 0);
		return 0;
		
    }
