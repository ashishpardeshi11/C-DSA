#include<bits/stdc++.h>
using namespace std;

	int findUnique (int * arr, int size)
	{
		int ans = 0;
		for (int i=0; i<=size; i++)
		{
			ans = ans^arr[i];
		}
		return 0;
	}
	
	int main()
	{
		int arr[5] = {1, 5, 1 ,5 ,4}
	
	     findUnique(arr, 5);
		//return 0;
	}
