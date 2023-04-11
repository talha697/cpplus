#include <iostream>
using namespace std;

// Mr.TT

		int fab(int n){
			
			if(n < 2 ){
				
				return 1;
			}
			return fab(n-1) + fab(n-2);
		}

//	Second Formula		(1.618034)^n)-((1-1.618031)^n))/SQRT(5)


   main(){

   		int a;
		cout << "Please enter the number to get Fibonacchi Number : ";
		cin >> a;
		cout << "Fibonacchi Number of " << a << " is " << fab(a);
		
		return 0;
}
