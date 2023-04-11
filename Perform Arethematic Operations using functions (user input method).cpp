#include <iostream>
using namespace std;

// Mr.TT

// Declaring of function
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int divide(double, double);
   main(){

   		int a, s, m, d, g, h;
	
		cout << "Please enter 1st Number : ", cin >> g;
		cout << "Please enter 2nd Number : ", cin >> h;
		a = addition(g, h);
		cout << "\n\nAddition of Numbers is : " << a << endl;
		
		s = subtraction(g, h);
		cout << "Subtraction of Numbers is : " << s << endl;
		
		m = multiplication(g, h);
		cout << "Multiplication of Numbers is : " << m << endl;
		
		d = divide(g, h);
		cout << "Division of Numbers is : " << d << endl;
		
		system ("pause");
}

// defining multiple functions.
int addition(int g, int h){
	
	return (g + h);
}
int subtraction(int g, int h) {
	
	return (g - h);
}
int multiplication(int g, int h) {
	
	return (g * h);
}
int divide(double g, double h) {
	
	return (g / h);
}