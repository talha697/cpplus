#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

// Mr.TT
//			fuction for renaming files 

	void rename(){
		
		string mytext;
   		ifstream rname("chqseq.txt");
   		rname >> mytext;
   		cout << mytext;
	}
   main(){
   	
   	
   		
   		
		bool oldname[] = rename();
		bool newname[] = "test";
	
												/*	Deletes the file if exists */
	
	
//	if (rename(oldname, newname) != 0)
//		perror("Error renaming file");
//	else
//		cout << "File renamed successfully";
//	
//	return 0;
}
