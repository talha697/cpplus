#include <iostream>
using namespace std;

// Mr.TT
				// sum of even and odd number seprately of given upper limit
   main(){

   		int uplmt, lowlmtEven=0, lowlmtOdd=1;
   		
   		cout << "Please enter Upper limit : ", cin >> uplmt;	
   		
   		(uplmt%2 == 0) ? cout << endl << "\t" << uplmt << " is Even Number" : cout << uplmt << " is Odd Number\n\n"; // is number odd or even
   		
		cout << "\nSum of Odd numbers upto " << uplmt << " is :" << (1+((uplmt-1)/2)) * (1+((uplmt-1)/2));	// sum of odd numbers
		cout << "\nSum of Even numbers upto " << uplmt << " is :" << uplmt/2 + ((uplmt/2)*(uplmt/2));	// sum of even numbers
		cout << "\nSum of Total Number Upto " << uplmt << " is : " << ((uplmt+1)*uplmt)/2; 	// sum of total numbers
		
		while (lowlmtEven < uplmt){
			
			lowlmtEven = lowlmtEven + 2;
			cout << "\nEven numbers are : " << lowlmtEven;
			
		}
}



			/*
					Total Odd Number In Upper Limit = 1+[(N-1)/2]
					Total Even Number In Upper Limit = N/2
					Sum Of Total Odd Number In Upper Limit =  Total Odd Number *  Total Odd Numbers
					Sum Of Total Even Number In Upper Limit = (Total Even Number * Total Even Number )+ Total Even Number
					Total Number = Total Even Number + Total Odd Numbers
					Sum Upto Upper Limit = N(N+1)/2
			*/