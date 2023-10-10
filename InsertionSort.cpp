#include<bits/stdc++.h>
using namespace std;

	void insertionSort(int arr[], int n)
	{
		for(int i=1; i<n; i++)
		{
			int temp = arr[i];
			int j= i-1;
			
			while(j>=0 && arr[j]>temp)
			{
				arr[j+1] = arr[j];
				j--;
			}
			
			arr[j+1] = temp;
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
		int arr[6] = {4, 69, 1, -45, 526, 9};
		
		
	    insertionSort(arr, 6);
	    
	    printArray(arr, 6);
	    
	    
	//	return 0;
	}
