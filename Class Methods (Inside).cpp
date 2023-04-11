#include <iostream>
using namespace std;

// Mr.TT

		class MyClass{
		
			public:
				int MymethodOut(int maxspeed);
				
		};
	
	int MyClass::MymethodOut(int maxspeed){
		
		return maxspeed;
	}
		

   main(){
	
			MyClass myobj;
			int a;
			cout << "Please enter the speed of the car : ";
			cin >> a;
			cout << "\nClass Method : Outside (with Parameter)";
			cout << endl << "Max Speed of the Car is " << myobj.MymethodOut(a);
   }
