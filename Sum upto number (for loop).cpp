#include <bits/stdc++.h> 

								/* This will include all type of standard library
												 (Code by: Mr.TT)*/
using namespace std;

 main(){

   		int num;
   		int sum;
		int i;
   		
   		
		cout << "Please enter the number to get sum upto : ";
   		cin>> num;
   
   		if (num >=1 && num <=1000){
   			for (i= 1 ; i < num+1 ; i++){
   				sum = sum + i;			
			   }
			   cout << "Sum of Numbers upto " << num << " is " << sum << endl<< endl;
			   }
			   else{		
			cout << "\nPlease enter number from 01 to 1000 ";
		}	

}
