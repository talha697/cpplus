#include <iostream>
using namespace std;

// Mr.TT


		class Employee{
			
			private:
		
				int salary = 5000;
		
			public:
						
				void setsalary(int s){
				
					salary = s;
			}
				int getsalary(){
					return salary;
				}
		};

   main(){
   			int a;
			Employee obj;
			obj.setsalary(a);
			cout << obj.getsalary();
			
			}
			
