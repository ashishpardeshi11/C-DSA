#include<iostream>
using namespace std;

 int evenodd(int n){
 	
 	if(n%2 == 0) {
 		cout<< " Even nember /n";
	 }
	 else{
	 	cout<< " Odd Number /n";
	 }
 }
  int main()
  {
  int n;
  cin>>n;
    evenodd(n);	
  	return 0;
  }
