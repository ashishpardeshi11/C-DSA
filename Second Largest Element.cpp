#include<iostream>
using namespace std;

int main()
{

 	int arr[] = {2556, 652, 465, 46, 5464, 64, 53463153468, 545255, 5650};
	 int n = sizeof(arr)/sizeof(arr[0]);
 
 int Last = INT_MIN, secound = INT_MIN;
 	
 	 for(int i=0; i<=n; i++)
 	 {
 	   	if(arr[i] > Last)
			{
				secound = Last;
				Last = arr[i];
				
				
			}
			else if (secound < arr[i])
			secound = arr[i];	
	 }
	 cout << "Second Smallestt elemant is : " <<secound;
 }
