#include <iostream>
using namespace std;

// Mr.TT

		class MyClass{
		
			public:
				int MyNum;
				int MyNum2;
				string MyStr;
				string Mycar;
		};
		

   main(){

   		MyClass MyObj;
   		
   		MyObj.MyNum = 15;
   		MyObj.MyNum2 = 10;
   		MyObj.MyStr = "Hello";
		MyObj.Mycar = "Rols Royce";
		
		MyClass Myobj2;
		
		Myobj2.Mycar ="BMW";
		   		
   		cout << MyObj.MyNum << endl;
   		cout << MyObj.MyStr << endl;
		cout << MyObj.Mycar << endl;
		cout << MyObj.MyNum2 << endl;   		
   		cout << Myobj2.Mycar << endl;
}
