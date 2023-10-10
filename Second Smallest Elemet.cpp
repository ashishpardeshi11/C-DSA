#include<iostream>
using namespace std;

int main()
 {
 	int arr[] = {12, 7, 41, 48, 65, 84, 766, 521,546};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	
 	int frist = INT_MAX, secound = INT_MAX;
 	
 	 for(int i=0; i<=n; i++)
 	 {
 	   	if(arr[i] < frist)
			{
				secound = frist;
				frist = arr[i];
				
				
			}
			else if (secound < arr[i])
			secound = arr[i];	
	 }
	 cout << "Second Smallestt elemant is : " <<secound;
 }
