#include<bits/stdc++.h>
using namespace std;


	int binerySearch(int arr[], int n, int kay)
	{
		int start = 0;
		int end = n-1;
	//nt mid = start + end / 2;
		
		int mid = start + (end + start)/2;
		
		while(start <= end)
		{
			if(arr[mid] == kay)
			{
				return mid;
			}
			
			if(kay > arr[mid])
			{
				start = mid + 1;
			}
			else
			{
				end = mid -1;
			}
			mid = (start + end)/2;
		}
		return -1;
		
	}
	
	int main ()
	{
		int even[6] = {1, 3, 4, 6, 8, 12};
		int odd[5] = {2, 3, 5, 7, 9};
		
		int index =  binerySearch(even, 6, 8);
	//nt index =  binerySearch(odd, 5, 9);
		
		cout<< "index 8 id " << index << endl;
		//ut<< " index 9is " << index << endl;
		
		
		
		return  0;
		
	}
