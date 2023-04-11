#include <iostream>
using namespace std;

// Mr.TT

   main(){
				// converting decimal into binary number
				
		int num, r, d ;
		
		cout << "Please enter decimal number : ";
		cin >> num;
		
		do {
		r = num%2;
		d = num/2;
		cout << d << " | " << r;
		num = d/2;  		
			}
		
	while (num >= 1); 

	}
