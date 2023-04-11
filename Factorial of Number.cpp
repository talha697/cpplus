#include <iostream>
using namespace std;

// Factorial of n = n * (n-1)
// Factorial is denoted by !

int Factorial(int n){
	
	if (n <= 1){
    	return 1;
    }
	return n * Factorial(n-1);
}

main (){

	int a;
	cout << "Factorial of Number\n\n";
	cout << "Please Enter Number : ";		// This not powerfull computer that why it can calculate factorial of numbers upto 31
    cin >> a;
    cout << "\n\nThe Factorial of " << a << " is :" << Factorial(a);
    
    return 0;
		
}