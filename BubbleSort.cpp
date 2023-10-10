#include<bits/stdc++.h>
using namespace std;

		void bubbleSort(int arr[], int n)
	{
		for(int i=1; i<n-1; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
			}
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
		
		
	    bubbleSort(arr, 6);
	    
	    printArray(arr, 6);
	    
	    
	//	return 0;
	}
