#include<bits/stdc++.h>
using namespace std;

	void selectionSort(int arr[], int n)
	{
		for(int i=0; i<n-1; i++)
		{
			int midIndex = i;
			
			for(int j=i+1; j<n; j++)
			{
				if(arr[j] < arr[midIndex])
				midIndex = j;
			}
			
			swap(arr[midIndex], arr[i]);
			
		}
	}
	
	void printArray(int arr[], int n)
	{
		for(int i=0; i< n; i++)
		{
			cout<< arr[i]<< "  ";
		}
		
	}
	
	
	int main ()
	{
		int arr[6] = {4, 5, 1, 3, 7, 9};
		
		
	    selectionSort(arr, 6);
	    
	    printArray(arr, 6);
	    
	    
	//	return 0;
	}
