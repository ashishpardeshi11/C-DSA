#include<iostream>
using namespace std;

 int isprime(int n){
 	for(int i= 2; i<= n; i++){
 		
 		if(n%i == 0)
 			
		 return 1;
	 }
	 return 0;
 	
 }
  int main()
  {
  int n;
  cin>>n;
    isprime(n);	
    
  	return 0;
  }
