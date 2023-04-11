#include <iostream>
using namespace std;

main(){
	
	// making calculator 
	int number = 0 , oprat = 0 ,multiplier = 0;
	
	cout << "Please use following operator to perform calculation" << endl << "+ = Addition\n" << "- = Subraction\n" << "* = Multiply\n" << "/ = Division" << endl;
	cout << "Please enter your desired number i.e 2 : ";
	cin >> number;
	cout << "please enter your operator i.e * : ";
	cin >> oprat;
	cout << "Please enter your muliplier i.e 4 : ";
	cin >> multiplier;
	
		
		if(oprat=='*'){
		
		cout << number * multiplier;
	}
		else(oprat=='+'){
		cout << number + multiplier;
	}
		else(oprat=='-'){
			out << number - multiplier;
		}
		c
		else(oprat=='/'){
			cout << number / multiplier;
		}
		
		

	
	
	
}