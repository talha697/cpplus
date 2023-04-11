#include <bits/stdc++.h> // This will include all type of standard library (Code by: Mr.TT)
using namespace std;

  int lessThan100(int a, int b) {
	return a+b;
}

  
   main(){
   	while (true){
	  
	   int a, b;
	   
	cout << "\t\tSUM is Less than 100 Checker\n\n";
	cout << "Please enter 1st number : ", cin >> a;
	cout << "Please enter 2nd number : ", cin >> b;
	
	if (lessThan100(a,b)<=100){
		
		cout << "Sum of given numbers are : " << lessThan100(a,b) << "\n\n\n";	
		
	}
	else 
		cout << "Sum of given numbers are greater than 100\n\nPlease enter numbers whos sum is less than 100\n\n\n";
	 }	
}
